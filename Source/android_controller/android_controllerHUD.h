// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "android_controllerHUD.generated.h"

UCLASS()
class Aandroid_controllerHUD : public AHUD
{
	GENERATED_BODY()

public:
	Aandroid_controllerHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

