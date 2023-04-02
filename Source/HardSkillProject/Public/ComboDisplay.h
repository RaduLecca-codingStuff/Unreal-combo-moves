// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ComboDisplay.generated.h"

/**
 * 
 */
UCLASS()
class HARDSKILLPROJECT_API UComboDisplay : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(meta=(BindWidget))
	    class UImage* img1;
	UPROPERTY(meta = (BindWidget))
		class UImage* img2;
	UPROPERTY(meta = (BindWidget))
		class UImage* img3;
	UPROPERTY(meta = (BindWidget))
		class UImage* img4;
	UPROPERTY(meta = (BindWidget))
		class UImage* img5;

};
