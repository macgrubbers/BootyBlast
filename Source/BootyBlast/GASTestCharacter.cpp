// Fill out your copyright notice in the Description page of Project Settings.


#include "GASTestCharacter.h"
#include "AbilitySystemComponent.h"
#include "BasicAttributeSet.h"

// Sets default values
AGASTestCharacter::AGASTestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));

}

// Called when the game starts or when spawned
void AGASTestCharacter::BeginPlay()
{
	Super::BeginPlay();

	//
	// if (IsValid(AbilitySystemComponent))
	// {
	// 	BasicAttributeSet = AbilitySystemComponent->GetSet<UBasicAttributeSet>();
	// }
	
}

// Called every frame
void AGASTestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UAbilitySystemComponent * AGASTestCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

// Called to bind functionality to input
void AGASTestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}