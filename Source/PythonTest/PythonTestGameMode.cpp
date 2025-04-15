// Copyright Epic Games, Inc. All Rights Reserved.

#include "PythonTestGameMode.h"
#include "PythonTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

APythonTestGameMode::APythonTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
