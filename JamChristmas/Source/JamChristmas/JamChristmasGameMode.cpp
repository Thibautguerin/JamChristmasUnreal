// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamChristmasGameMode.h"
#include "JamChristmasHUD.h"
#include "JamChristmasCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamChristmasGameMode::AJamChristmasGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJamChristmasHUD::StaticClass();
}
