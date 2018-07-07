// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Project_XGameMode.h"
#include "Project_XCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_XGameMode::AProject_XGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
