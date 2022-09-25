// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/AGDPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAGDPlayerCharacter::AAGDPlayerCharacter() {

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComponent ->SetupAttachment(RootComponent);


	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(SpringArmComponent);

}