// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MYOCalibration.h"
#include "MYOCalibrationGameMode.h"
#include "MYOCalibrationHUD.h"
#include "MYOCalibrationCharacter.h"

AMYOCalibrationGameMode::AMYOCalibrationGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMYOCalibrationHUD::StaticClass();
}
