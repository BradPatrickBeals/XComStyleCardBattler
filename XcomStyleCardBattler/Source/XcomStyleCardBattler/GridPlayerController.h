// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GridPlayerController.generated.h"

UCLASS()
class XCOMSTYLECARDBATTLER_API AGridPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AGridPlayerController();

protected:
	virtual void SetupInputComponent() override;

private:
	// Handle mouse click
	void OnLeftMouseClick() const;
	
	// Move character to clicked cell
	void MoveCharacterToClickedCell() const;
};