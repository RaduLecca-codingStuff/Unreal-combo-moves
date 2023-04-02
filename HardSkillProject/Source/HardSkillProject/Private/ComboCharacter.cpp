// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboCharacter.h"

// Sets default values
AComboCharacter::AComboCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AComboCharacter::Hit(bool type)
{
	HitType = type;
	GetWorldTimerManager().ClearTimer(tHandler);
	if (type)
		ComboMove += '1';
	else
		ComboMove += '0';
	length++;
	GetWorldTimerManager().SetTimer(tHandler, this,&AComboCharacter::ClearCombo, .2f, false, 1.5f);

	if (length >= 7)
		ClearCombo();
	LastComboHit();
}

void AComboCharacter::ClearCombo()
{
	length = 0;
	ComboMove = "";
	GetWorldTimerManager().ClearTimer(tHandler);
	pauseForCombo = false;
}

FString AComboCharacter::GetCombo()
{
	return ComboMove;
}

int AComboCharacter::GetHitType() {

	return HitType;
}

void AComboCharacter::LastComboHit()
{
	if (ComboMove == "111") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Punch Frenzy"));
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this, &AComboCharacter::ClearCombo, 0.2f, false, 1);
		return;
	}
	if (ComboMove == "000") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Berserk Dance"));
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this, &AComboCharacter::ClearCombo, 0.2f, false, 1);
		return;
	}

	if (ComboMove == "0001") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Berserk Dance:Extra Crazy"));
		pauseForCombo = true;
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this,&AComboCharacter::ClearCombo, 0.2f, false, 1.5f);
		return;
	}
	if (ComboMove == "1110") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Punch Frenzy:Bone Breaker"));
		pauseForCombo = true;
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this,&AComboCharacter::ClearCombo, 0.2f, false, 1.5f);
		return;
	}
	if (ComboMove == "1010") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Swift Switch"));
		pauseForCombo = true;
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this,&AComboCharacter::ClearCombo, 0.2f, false, 1.5f);
		return;
	}
	if (ComboMove == "00110") {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Slow Swap"));
		pauseForCombo = true;
		HitType = 0;
		GetWorldTimerManager().ClearTimer(tHandler);
		GetWorldTimerManager().SetTimer(tHandler, this,&AComboCharacter::ClearCombo, 0.2f, false, 1.5f);
		return;
	}

}

void AComboCharacter::releaseComboKey()
{
	HitType = 0;
}

// Called when the game starts or when spawned
void AComboCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComboCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AComboCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("LeftHit"),IE_Pressed,this, &AComboCharacter::LeftHit);
	PlayerInputComponent->BindAction(TEXT("RightHit"), IE_Pressed, this, &AComboCharacter::RightHit);

	PlayerInputComponent->BindAction(TEXT("LeftHit"), IE_Released, this, &AComboCharacter::releaseComboKey);
	PlayerInputComponent->BindAction(TEXT("RightHit"), IE_Released, this, &AComboCharacter::releaseComboKey);
}

void AComboCharacter::LeftHit()
{
	if (!pauseForCombo)
	{
		Hit(true);
		HitType = 1;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Arm Hit"));
}

void AComboCharacter::RightHit()
{
	if (!pauseForCombo)
	{
		Hit(false);
		HitType = 2;
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Leg Hit"));
}

