// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovement.h"

// Sets default values for this component's properties
UPlayerMovement::UPlayerMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerMovement::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UPlayerMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
/*
APlayerCharacter* UPlayerMovement::GetOwnerAsPlayer()
{
	return Cast<APlayerCharacter>(GetOwner());
}

void UPlayerMovement::StandardMovement(float XInput, float YInput)
{
	//World direction that movement input applies to
	FVector WorldDir;
	
	//Handles strafing movement
	WorldDir = GetOwnerAsPlayer()->GetActorRightVector();
	GetOwnerAsPlayer()->AddMovementInput(WorldDir, XInput);

	//Handles forward and backward movement
	WorldDir = GetOwnerAsPlayer()->GetActorForwardVector();
	GetOwnerAsPlayer()->AddMovementInput(WorldDir, YInput);
}*/
