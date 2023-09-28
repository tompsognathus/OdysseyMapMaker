// Copyright Epic Games, Inc. All Rights Reserved.

#include "OdysseyMapMakerGameMode.h"
#include "OdysseyMapMakerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOdysseyMapMakerGameMode::AOdysseyMapMakerGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
