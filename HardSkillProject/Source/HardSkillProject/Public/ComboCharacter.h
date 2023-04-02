// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ComboCharacter.generated.h"

UCLASS()
class HARDSKILLPROJECT_API AComboCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AComboCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category="ComboComponent")
		FString ComboMove;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ComboComponent")
		int32 HitType = 0;
	
	int32 length;
	bool pauseForCombo = false;
	bool isKeyPressed;
	
	

	UFUNCTION(BlueprintCallable,Category="Combo")
		void Hit(bool type);
	UFUNCTION(BlueprintCallable, Category = "Combo")
		void ClearCombo();
	UFUNCTION(BlueprintCallable, Category = "Combo")
		FString GetCombo();
	UFUNCTION(BlueprintCallable, Category = "Combo")
		int GetHitType();
	void LastComboHit();
	
	FTimerHandle tHandler;

	
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
	UFUNCTION()
	void releaseComboKey();

};
