// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "MapGrid.generated.h"

UCLASS()
class XCOMSTYLECARDBATTLER_API AMapGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Grid dimensions (number of cells)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "1"))
	int32 GridWidth = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "1"))
	int32 GridHeight = 10;

	// Size of each individual cell
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "10.0"))
	float CellSize = 100.0f;

	// Height offset above ground to prevent Z-fighting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings")
	float GridHeightOffset = 5.0f;

	// Visual settings
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Visuals", meta = (ClampMin = "0.01", ClampMax = "0.5"))
	float GridLineThickness = 0.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Visuals")
	FLinearColor GridColor = FLinearColor::Green;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Visuals")
	bool bShowGrid = true;

	// Optional: Use a static mesh for grid cells (leave empty to use debug lines)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Visuals")
	UStaticMesh* CellMesh = nullptr;

	// Material to apply to the grid cells
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Visuals")
	UMaterialInterface* CellMaterial = nullptr;

	// Component to hold instanced meshes if using mesh visualization
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UInstancedStaticMeshComponent* GridMeshComponent;

	// Utility functions
	UFUNCTION(CallInEditor, Category = "Grid")
	void RegenerateGrid();

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FVector GetCellWorldPosition(int32 X, int32 Y) const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool GetCellFromWorldPosition(const FVector& WorldPosition, int32& OutX, int32& OutY) const;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	bool IsValidGridPosition(int32 X, int32 Y) const;

	// Movement functions
	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	void SnapActorToCell(AActor* Actor, int32 X, int32 Y);

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	void SnapActorToNearestCell(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	bool GetActorGridPosition(AActor* Actor, int32& OutX, int32& OutY) const;

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	int32 GetDistanceBetweenCells(int32 X1, int32 Y1, int32 X2, int32 Y2) const;

private:
	void GenerateGridVisualization();
	void ClearGridVisualization() const;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};
