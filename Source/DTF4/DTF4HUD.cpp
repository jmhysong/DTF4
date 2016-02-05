// Fill out your copyright notice in the Description page of Project Settings.

#include "DTF4.h"
#include "DTF4HUD.h"




ADTF4HUD::ADTF4HUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UUserWidget>MMenuBP(TEXT("WidgetBlueprint'/Game/Widgets/MenuWidget.MenuWidget_C'"));
	if (MMenuBP.Class)
	{
		MMenuClass = MMenuBP.Class;
	}
	static ConstructorHelpers::FClassFinder<UUserWidget>MSettingsBP(TEXT("WidgetBlueprint'/Game/Widgets/SettingsWidget.SettingsWidget_C'"));
	if (MSettingsBP.Class)
	{
		MSettingsClass = MSettingsBP.Class;
	}
	static ConstructorHelpers::FClassFinder<UUserWidget>MJoinGameBP(TEXT("WidgetBlueprint'/Game/Widgets/JoinMenuWidget.JoinMenuWidget_C'"));
	if (MJoinGameBP.Class)
	{
		MJoinGameClass = MJoinGameBP.Class;
	}
}

void ADTF4HUD::BeginPlay()
{
	Super::BeginPlay();
	if (!MMenuClass)
	{
		return;
	}
	if (!MMenu)
	{
		MMenu = CreateWidget<UUserWidget>(GetWorld(), MMenuClass);
	}
	MMenu->AddToViewport();

	if (!MSettingsClass)
	{
		return;
	}
	if (!MSettings)
	{
		MSettings = CreateWidget<UUserWidget>(GetWorld(), MSettingsClass);
	}
	MSettings->AddToViewport();

	if (!MJoinGameClass)
	{
		return;
	}
	if (!MJoinGame)
	{
		MJoinGame = CreateWidget<UUserWidget>(GetWorld(), MJoinGameClass);
	}
	MJoinGame->AddToViewport();
}
