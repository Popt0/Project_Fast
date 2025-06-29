// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class PROJECT_FAST_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Adds a mapping context to the player character
	UFUNCTION(BlueprintCallable)
	void addIMC(TSoftObjectPtr<UInputMappingContext> IMC);

	// Handles standard movement inputs such as right, left, forward, and backward
	UFUNCTION(BlueprintCallable)
	void StandardMovement(float XInput, float YInput);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
