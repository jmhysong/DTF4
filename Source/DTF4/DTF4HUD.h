// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "Blueprint/UserWidget.h"
#include "DTF4HUD.generated.h"

/**
 * 
 */
UCLASS()
class DTF4_API ADTF4HUD : public AHUD
{
	GENERATED_BODY()
	
public:
	ADTF4HUD(const FObjectInitializer& ObjectInitializer);
	void BeginPlay() override;

	UPROPERTY()
		TSubclassOf<class UUserWidget>MMenuClass;
	UPROPERTY()
		UUserWidget* MMenu;
	UPROPERTY()
		TSubclassOf<class UUserWidget>MSettingsClass;
	UPROPERTY()
		UUserWidget* MSettings;
	UPROPERTY()
		TSubclassOf<class UUserWidget>MJoinGameClass;
	UPROPERTY()
		UUserWidget* MJoinGame;
	
	
};
