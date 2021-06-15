// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GAM312ExampleGameMode.h"
#include "GAM312ExampleHUD.h"
#include "GAM312ExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGAM312ExampleGameMode::AGAM312ExampleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGAM312ExampleHUD::StaticClass();
}
