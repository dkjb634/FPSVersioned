// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_versionedGameMode.h"
#include "FPS_versionedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_versionedGameMode::AFPS_versionedGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
