// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnGASGameMode.h"
#include "LearnGASCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnGASGameMode::ALearnGASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
