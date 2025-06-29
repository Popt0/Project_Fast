// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();


	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(PlayerInputComponent);

}

void APlayerCharacter::addIMC(TSoftObjectPtr<UInputMappingContext> IMC)
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* InputSystem = PlayerController->GetLocalPlayer()->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			InputSystem->AddMappingContext(IMC.LoadSynchronous(), 0);
		}
	}
}

// Handles standard movement inputs such as right, left, forward, and backward
void APlayerCharacter::StandardMovement(float XInput, float YInput)
{
	//World direction that movement input applies to
	FVector WorldDir;

	//Handles strafing movement
	WorldDir = this->GetActorRightVector();
	this->AddMovementInput(WorldDir, XInput);

	//Handles forward and backward movement
	WorldDir = this->GetActorForwardVector();
	this->AddMovementInput(WorldDir, YInput);
}

