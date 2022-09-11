// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleGGameMode.h"
#include "PuzzleGCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleGGameMode::APuzzleGGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
