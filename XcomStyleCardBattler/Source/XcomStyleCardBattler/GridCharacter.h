// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MapGrid.h"
#include "GridCharacter.generated.h"

UCLASS(Abstract, Blueprintable)
class XCOMSTYLECARDBATTLER_API AGridCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGridCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Reference to the grid this character is on
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
	AMapGrid* CurrentGrid;

	// Auto-find nearest grid if CurrentGrid is not manually assigned
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
	bool bAutoFindGrid = true;

	// Current grid position
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
	int32 GridX;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid")
	int32 GridY;

	// Movement range in cells
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Movement")
	int32 MovementRange = 5;

	// Movement functions
	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	void MoveToCell(int32 TargetX, int32 TargetY);

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	bool CanMoveToCell(int32 TargetX, int32 TargetY) const;

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	void UpdateGridPosition();

	UFUNCTION(BlueprintCallable, Category = "Grid Movement")
	int32 GetDistanceToCell(int32 TargetX, int32 TargetY) const;
};