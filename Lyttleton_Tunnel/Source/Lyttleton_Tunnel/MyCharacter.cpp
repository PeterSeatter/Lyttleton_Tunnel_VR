// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	//Sets the dependence of the speed
	BaseSpeed = 10.0f
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//VR Input
	InputComponent->BindAxis("HorizontalVR", this, &AMyCharacter::MoveFoward);
	InputComponent->BindAxis("VerticalVR", this, &AMyCharacter::MoveRight);

	//Keyboard Input
	InputComponent->BindAxis("HorizontalKeyboard", this, &AMyCharacter::MoveFoward);
	InputComponent->BindAxis("VerticalKeyboard", this, &AMyCharacter::MoveRight);
}

void AMyCharacter::MoveForward(float AxisValue)
{
	if (AxisValue)
	{
		AddMovementInput(GetActorForwardVector(), AxisValue);
		UE_LOG(LogTemp, Warning, TEXT("Horizontal Input"));
	}	
}

void AMyCharacter::MoveRight(float AxisValue)
{
	if (AxisValue)
	{
		AddMovementInput(GetActorRightVector(), AxisValue);
		UE_LOG(LogTemp, Warning, TEXT("Vertical Input"));
	}	
}
