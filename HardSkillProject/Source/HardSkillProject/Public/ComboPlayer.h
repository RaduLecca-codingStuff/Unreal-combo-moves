// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ComboPlayer.generated.h"

UCLASS()
class HARDSKILLPROJECT_API AComboPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AComboPlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combo")
		int combolength;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combo")
		FString combo;
	UFUNCTION(BlueprintCallable, Category = "Combo")
		void WipeCombo();
	UFUNCTION(BlueprintCallable, Category = "Combo")
		void Hit(bool AtkType);

	void LastHit();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UFUNCTION()
		void LeftHit();
	UFUNCTION()
		void RightHit();


};
