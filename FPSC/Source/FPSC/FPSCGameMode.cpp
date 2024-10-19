// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCGameMode.h"
#include "FPSCCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSCGameMode::AFPSCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
