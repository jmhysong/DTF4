// Fill out your copyright notice in the Description page of Project Settings.

#include "DTF4.h"
#include "DTF4GameMode.h"
#include "DTF4HUD.h"





ADTF4GameMode::ADTF4GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	static ConstructorHelpers::FClassFinder<APlayerController>DTF4PCBP(TEXT("Blueprint'/Game/Blueprints/DTF4PlayerController.DTF4PlayerController_C'"));
	if (DTF4PCBP.Class)
	{
		PlayerControllerClass = DTF4PCBP.Class;
	}

	HUDClass = ADTF4HUD::StaticClass();

}
