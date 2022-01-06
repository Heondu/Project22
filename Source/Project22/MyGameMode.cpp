// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameMode.h"
#include "MyPlayerCharacter.h"

AMyGameMode::AMyGameMode()
{
	DefaultPawnClass = AMyPlayerCharacter::StaticClass();
}