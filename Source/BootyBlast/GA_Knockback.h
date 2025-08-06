// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_Knockback.generated.h"

/**
 * 
 */
UCLASS()
class BOOTYBLAST_API UGA_Knockback : public UGameplayAbility
{
	GENERATED_BODY()

	public:
		UGA_Knockback();

		// Tells an ability to activate immediately when its granted. Used for passive abilities and abilities forced on others.
		// Ripped from https://github.com/tranek/GASDocumentation/blob/master/Source/GASDocumentation/Public/Characters/Abilities/GDGameplayAbility.h
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		bool ActivateAbilityOnGranted = false;

		virtual void OnAvatarSet(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;

		virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};
