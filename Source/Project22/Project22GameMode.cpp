// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project22GameMode.h"
#include "Project22Character.h"
#include "UObject/ConstructorHelpers.h"

AProject22GameMode::AProject22GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
