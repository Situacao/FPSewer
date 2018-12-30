// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "FPSewerGameMode.h"
#include "FPSewerHUD.h"
#include "FPSewerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPSewerGameMode::AFPSewerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSewerHUD::StaticClass();
}
