// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboPlayer.h"



// Sets default values
AComboPlayer::AComboPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AComboPlayer::WipeCombo()
{
	combo="";
}

void AComboPlayer::Hit(bool AtkType)
{
	if (AtkType)
		combo += '0';
	else 
		combo += '1';

	combolength++;
	LastHit();
	if (combolength > 5)
		WipeCombo();

	
}

void AComboPlayer::LastHit()
{
	if (combo == "111") {

		return;
	}
	if (combo == "000") {

		return;
	}
	if (combo == "0100") {

		return;
	}
	if (combo == "01100") {

		return;
	}
	if (combo == "00101") {

		return;
	}
	if (combo == "11010") {

		return;
	}
	if (combo == "") {

		return;
	}
}

void AComboPlayer::LeftHit()
{
	Hit(true);
	UE_LOG(LogTemp, Warning, TEXT("left"));
}

void AComboPlayer::RightHit()
{
	Hit(false);
	UE_LOG(LogTemp, Warning, TEXT("right"));
}


// Called when the game starts or when spawned
void AComboPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AComboPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AComboPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UE_LOG(LogTemp, Warning, TEXT("if this doesn't show up, I should've followed that tutorial more thoroughly"));
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction(TEXT("LeftHit"),IE_Pressed,this,&AComboPlayer::LeftHit);
	PlayerInputComponent->BindAction(TEXT("RightHit"), IE_Pressed, this, &AComboPlayer::RightHit);
}

