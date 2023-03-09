// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class MyAbilityID : uint8
{
	None = 0,
	Confirm,
	Cancel,
	// Customized abilities
	Jump
};
