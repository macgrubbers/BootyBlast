// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "BasicAttributeSet.generated.h"

// Accessors macros
#define ATTRIBUTE_ACCESSORS(ClassName,PropertyName)\
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName,PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName)\
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)


UCLASS()
class BOOTYBLAST_API UBasicAttributeSet : public UAttributeSet
{
	GENERATED_BODY()


	public:
		// BASE ATTRIBUTES
		UPROPERTY(BlueprintReadOnly, Category = "Attributes") //, ReplicatedUsing = OnRep_Health)
		FGameplayAttributeData Health;
		ATTRIBUTE_ACCESSORS(UBasicAttributeSet, Health);

<<<<<<< HEAD
		UPROPERTY(BlueprintReadOnly, Category = "Attributes") //, ReplicatedUsing = OnRep_MaxHealth)
		FGameplayAttributeData MaxHealth;
		ATTRIBUTE_ACCESSORS(UBasicAttributeSet, MaxHealth);

		UPROPERTY(BlueprintReadOnly, Category = "Attributes") //, ReplicatedUsing = OnRep_Stamina)
		FGameplayAttributeData Stamina;
		ATTRIBUTE_ACCESSORS(UBasicAttributeSet, Stamina);

		UPROPERTY(BlueprintReadOnly, Category = "Attributes") //, ReplicatedUsing = OnRep_MaxStamina)
		FGameplayAttributeData MaxStamina;
		ATTRIBUTE_ACCESSORS(UBasicAttributeSet, MaxStamina);

		virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
=======
		UPROPERTY(BlueprintReadOnly, Category = "Attributes")
		FGameplayAttributeData Stamina;
		ATTRIBUTE_ACCESSORS(UBasicAttributeSet, Stamina);
>>>>>>> parent of e2ed680 (mfers we got a real simple ability system goin)
	
};
