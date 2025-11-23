// Fill out your copyright notice in the Description page of Project Settings.


#include "GridPlayerController.h"
#include "GridCharacter.h"
#include "MapGrid.h"
#include "Engine/World.h"

AGridPlayerController::AGridPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}

void AGridPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Bind mouse click
	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &AGridPlayerController::OnLeftMouseClick);
}

void AGridPlayerController::OnLeftMouseClick() const
{
	MoveCharacterToClickedCell();
}

void AGridPlayerController::MoveCharacterToClickedCell() const
{
	// Get what we clicked on
	FHitResult HitResult;
	GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

	if (!HitResult.bBlockingHit)
	{
		return;
	}

	// Get our character
	AGridCharacter* GridChar = Cast<AGridCharacter>(GetPawn());
	if (!GridChar || !GridChar->CurrentGrid)
	{
		UE_LOG(LogTemp, Warning, TEXT("No GridCharacter or no CurrentGrid assigned!"));
		return;
	}

	// Convert world position to grid cell
	int32 TargetX, TargetY;
	if (GridChar->CurrentGrid->GetCellFromWorldPosition(HitResult.Location, TargetX, TargetY))
	{
		UE_LOG(LogTemp, Log, TEXT("Clicked cell (%d, %d)"), TargetX, TargetY);
		
		// Try to move there
		GridChar->MoveToCell(TargetX, TargetY);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Clicked outside grid bounds!"));
	}
}
