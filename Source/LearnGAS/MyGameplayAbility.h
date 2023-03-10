// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "LearnGAS.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class LEARNGAS_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UMyGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EMyAbilityID AbilityID = EMyAbilityID::None;
};
