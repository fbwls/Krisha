// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_KCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AProject_KCharacter

AProject_KCharacter::AProject_KCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}
