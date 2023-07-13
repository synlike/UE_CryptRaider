// Copyright Epic Games, Inc. All Rights Reserved.

#include "Crypt_RaiderGameMode.h"
#include "Crypt_RaiderCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACrypt_RaiderGameMode::ACrypt_RaiderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
