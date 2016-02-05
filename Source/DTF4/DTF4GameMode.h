// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "DTF4GameMode.generated.h"

/**
 * 
 */
UCLASS()
class DTF4_API ADTF4GameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	ADTF4GameMode(const FObjectInitializer& ObjectInitializer);
	UPROPERTY()
		TSubclassOf<class APlayerController>DTAF4PCClass;
	UPROPERTY()
		APlayerController* DTF4PC;
	
	
};
