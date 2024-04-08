// Copyright Epic Games, Inc. All Rights Reserved.

#include "Udemy_MP_SteamGameMode.h"
#include "Udemy_MP_SteamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUdemy_MP_SteamGameMode::AUdemy_MP_SteamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
