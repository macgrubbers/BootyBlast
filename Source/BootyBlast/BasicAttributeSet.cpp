// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayEffectExtension.h"
#include "GameplayEffectTypes.h" 
#include "GASTestCharacter.h"
#include "BasicAttributeSet.h"

// #include "GameplayEffect.h" // TODO

void UBasicAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

    if (Data.EvaluatedData.Attribute == GetHealthAttribute())
    {
        // Do stuff when hurt
        // TODO
        
        // Do stuff when health runs out
        if (GetHealth() <= 0.0f)
        {
            // Check for ability system component
            UAbilitySystemComponent* ASC = GetOwningAbilitySystemComponent();
            if (ASC)
            {
                // ASC->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(FName("State.Dead")));
                AActor* actor = ASC->GetAvatarActor();
            }
        }
    }
}

// void UBasicAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
// {
//     GAMEPLAYATTRIBUTE_REPNOTIFY(UBasicAttributeSet, Health, OldHelath);
// }