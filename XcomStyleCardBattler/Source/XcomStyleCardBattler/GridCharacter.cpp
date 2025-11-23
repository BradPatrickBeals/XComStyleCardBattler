// Fill out your copyright notice in the Description page of Project Settings.


#include "GridCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGridCharacter::AGridCharacter()
{
	// Set this character to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Initialize grid position
	GridX = 0;
	GridY = 0;
}

// Called when the game starts or when spawned
void AGridCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Error, TEXT("===== GridCharacter BeginPlay for %s ====="), *GetName());
	
	// Auto-find grid if not manually assigned
	if (!CurrentGrid && bAutoFindGrid)
	{
		UE_LOG(LogTemp, Warning, TEXT("Searching for grid..."));
		
		// Find the nearest grid in the level
		TArray<AActor*> FoundGrids;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMapGrid::StaticClass(), FoundGrids);
		
		if (FoundGrids.Num() > 0)
		{
			// Find the closest grid
			AMapGrid* NearestGrid = nullptr;
			float NearestDistance = FLT_MAX;
			
			for (AActor* GridActor : FoundGrids)
			{
				AMapGrid* Grid = Cast<AMapGrid>(GridActor);
				if (Grid)
				{
					float Distance = FVector::Dist(GetActorLocation(), Grid->GetActorLocation());
					if (Distance < NearestDistance)
					{
						NearestDistance = Distance;
						NearestGrid = Grid;
					}
				}
			}
			
			CurrentGrid = NearestGrid;
			UE_LOG(LogTemp, Warning, TEXT("Auto-assigned grid: %s"), CurrentGrid ? *CurrentGrid->GetName() : TEXT("NULL"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("No MapGrid found in level!"));
		}
	}
	
	// ===== THIS IS THE PART YOU'RE MISSING! =====
	// Snap to grid on start if grid is assigned
	if (CurrentGrid)
	{
		UE_LOG(LogTemp, Warning, TEXT("Snapping %s to grid..."), *GetName());
		CurrentGrid->SnapActorToNearestCell(this);
		UpdateGridPosition();
		UE_LOG(LogTemp, Warning, TEXT("Snapped to cell (%d, %d)"), GridX, GridY);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NO GRID ASSIGNED - Cannot snap!"));
	}
}

// Called every frame
void AGridCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGridCharacter::UpdateGridPosition()
{
	if (CurrentGrid)
	{
		CurrentGrid->GetActorGridPosition(this, GridX, GridY);
	}
}

bool AGridCharacter::CanMoveToCell(int32 TargetX, int32 TargetY) const
{
	if (!CurrentGrid || !CurrentGrid->IsValidGridPosition(TargetX, TargetY))
	{
		return false;
	}

	// Check if within movement range
	int32 Distance = CurrentGrid->GetDistanceBetweenCells(GridX, GridY, TargetX, TargetY);
	return Distance <= MovementRange;
}

void AGridCharacter::MoveToCell(int32 TargetX, int32 TargetY)
{
	if (!CanMoveToCell(TargetX, TargetY))
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot move to cell (%d, %d) - out of range or invalid"), TargetX, TargetY);
		return;
	}

	// Snap to target cell
	if (CurrentGrid)
	{
		CurrentGrid->SnapActorToCell(this, TargetX, TargetY);
		UpdateGridPosition();
		
		UE_LOG(LogTemp, Log, TEXT("Moved to cell (%d, %d)"), GridX, GridY);
	}
}

int32 AGridCharacter::GetDistanceToCell(int32 TargetX, int32 TargetY) const
{
	if (!CurrentGrid)
	{
		return -1;
	}

	return CurrentGrid->GetDistanceBetweenCells(GridX, GridY, TargetX, TargetY);
}