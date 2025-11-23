
// Fill out your copyright notice in the Description page of Project Settings.


#include "MapGrid.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h" 

// Sets default values
AMapGrid::AMapGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create an instanced static mesh component for optional mesh-based visualization
	GridMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GridMeshComponent"));
	RootComponent = GridMeshComponent;
}

// Called when the game starts or when spawned
void AMapGrid::BeginPlay()
{
	Super::BeginPlay();
	
	// Generate the grid at runtime
	if (bShowGrid)
	{
		GenerateGridVisualization();
	}
}

// Called every frame
void AMapGrid::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMapGrid::RegenerateGrid()
{
	ClearGridVisualization();
	GenerateGridVisualization();
}

FVector AMapGrid::GetCellWorldPosition(int32 X, int32 Y) const
{
	if (!IsValidGridPosition(X, Y))
	{
		return FVector::ZeroVector;
	}

	// Calculate the center position of the cell
	FVector LocalPosition = FVector(
		X * CellSize + CellSize * 0.5f,
		Y * CellSize + CellSize * 0.5f,
		0.0f
	);

	return GetActorLocation() + GetActorRotation().RotateVector(LocalPosition);
}

bool AMapGrid::GetCellFromWorldPosition(const FVector& WorldPosition, int32& OutX, int32& OutY) const
{
	// Convert world position to local space
	FVector LocalPosition = GetActorRotation().UnrotateVector(WorldPosition - GetActorLocation());

	// Calculate grid indices
	OutX = FMath::FloorToInt(LocalPosition.X / CellSize);
	OutY = FMath::FloorToInt(LocalPosition.Y / CellSize);

	return IsValidGridPosition(OutX, OutY);
}

bool AMapGrid::IsValidGridPosition(int32 X, int32 Y) const
{
	return X >= 0 && X < GridWidth && Y >= 0 && Y < GridHeight;
}

// Character Movement Functions
// TODO - Neil THe generation of the grid works, if there is an issue with movement its below this

void AMapGrid::SnapActorToCell(AActor* Actor, int32 X, int32 Y)
{
	if (!Actor || !IsValidGridPosition(X, Y))
	{
		return;
	}

	// Get the world position of the cell center
	FVector CellWorldPosition = GetCellWorldPosition(X, Y);
	
	// Start with the cell position, keep current Z
	FVector NewPosition = CellWorldPosition;
	NewPosition.Z = Actor->GetActorLocation().Z;

	// Trace to ground to place on terrain
	FHitResult HitResult;
	FVector TraceStart = NewPosition + FVector(0, 0, 1000.0f);
	FVector TraceEnd = NewPosition - FVector(0, 0, 1000.0f);
	
	if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility))
	{
		// Add capsule half-height so the character stands ON the ground, not IN it
		if (ACharacter* Character = Cast<ACharacter>(Actor))
		{
			float CapsuleHalfHeight = Character->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			NewPosition.Z = HitResult.Location.Z + CapsuleHalfHeight;
		}
		else
		{
			// For non-characters, just use hit location
			NewPosition.Z = HitResult.Location.Z;
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Final Position: %s"), *NewPosition.ToString());

	Actor->SetActorLocation(NewPosition);
}

void AMapGrid::SnapActorToNearestCell(AActor* Actor)
{
	if (!Actor)
	{
		return;
	}

	int32 X, Y;
	GetCellFromWorldPosition(Actor->GetActorLocation(), X, Y);
	
	// Clamp to a valid grid range (even if outside)
	X = FMath::Clamp(X, 0, GridWidth - 1);
	Y = FMath::Clamp(Y, 0, GridHeight - 1);
	
	UE_LOG(LogTemp, Warning, TEXT("Clamping to valid cell (%d, %d)"), X, Y);
	
	// Now snap to the clamped position
	SnapActorToCell(Actor, X, Y);
}

bool AMapGrid::GetActorGridPosition(AActor* Actor, int32& OutX, int32& OutY) const
{
	if (!Actor)
	{
		return false;
	}

	return GetCellFromWorldPosition(Actor->GetActorLocation(), OutX, OutY);
}

int32 AMapGrid::GetDistanceBetweenCells(int32 X1, int32 Y1, int32 X2, int32 Y2) const
{
	// Manhattan distance (grid-based movement like X-COM)
	return FMath::Abs(X2 - X1) + FMath::Abs(Y2 - Y1);
}

void AMapGrid::GenerateGridVisualization()
{
	if (!bShowGrid)
	{
		return;
	}

	// If using mesh-based visualization
	if (CellMesh && GridMeshComponent)
	{
		GridMeshComponent->SetStaticMesh(CellMesh);
		GridMeshComponent->ClearInstances();

		// Always clear/override the mesh's default material
		GridMeshComponent->EmptyOverrideMaterials();
		
		// Apply custom material if provided
		if (CellMaterial)
		{
			// Create a dynamic material instance so we can modify parameters

			if (UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(CellMaterial, this))
			{
				// Set the line thickness and color parameters
				DynamicMaterial->SetScalarParameterValue(FName("LineThickness"), GridLineThickness);
				DynamicMaterial->SetVectorParameterValue(FName("GridColor"), GridColor);
				
				GridMeshComponent->SetMaterial(0, DynamicMaterial);
			}
		}
		else
		{
			// If no material assigned, use a transparent/invisible material or clear it
			GridMeshComponent->SetMaterial(0, nullptr);
		}

		for (int32 X = 0; X < GridWidth; ++X)
		{
			for (int32 Y = 0; Y < GridHeight; ++Y)
			{
				FVector LocalPosition = FVector(
					X * CellSize + CellSize * 0.5f,
					Y * CellSize + CellSize * 0.5f,
					GridHeightOffset  // Add the height offset here
				);

				FTransform InstanceTransform;
				InstanceTransform.SetLocation(LocalPosition);
				InstanceTransform.SetScale3D(FVector(CellSize / 100.0f));

				GridMeshComponent->AddInstance(InstanceTransform, true);
			}
		}
	}
}

void AMapGrid::ClearGridVisualization() const
{
	if (GridMeshComponent)
	{
		GridMeshComponent->ClearInstances();
	}
}

#if WITH_EDITOR
void AMapGrid::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// Regenerate grid when properties change in editor
	if (PropertyChangedEvent.Property != nullptr)
	{
		const FName PropertyName = PropertyChangedEvent.Property->GetFName();
		
		if (PropertyName == GET_MEMBER_NAME_CHECKED(AMapGrid, GridWidth) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(AMapGrid, GridHeight) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(AMapGrid, CellSize) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(AMapGrid, bShowGrid) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(AMapGrid, CellMesh))
		{
			RegenerateGrid();
		}
	}
}
#endif