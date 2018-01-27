// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "android_controller.h"
#include "android_controllerGameMode.h"
#include "android_controllerHUD.h"
#include "android_controllerCharacter.h"

Aandroid_controllerGameMode::Aandroid_controllerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Aandroid_controllerHUD::StaticClass();
}
