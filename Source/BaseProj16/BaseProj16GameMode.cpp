// Copyright Epic Games, Inc. All Rights Reserved.

#include "BaseProj16GameMode.h"
#include "BaseProj16Character.h"
#include "UObject/ConstructorHelpers.h"

ABaseProj16GameMode::ABaseProj16GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
