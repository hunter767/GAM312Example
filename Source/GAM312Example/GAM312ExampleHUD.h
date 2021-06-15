// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GAM312ExampleHUD.generated.h"

UCLASS()
class AGAM312ExampleHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGAM312ExampleHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

