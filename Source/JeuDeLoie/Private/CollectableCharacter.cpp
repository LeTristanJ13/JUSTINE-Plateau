// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableCharacter.h"

#include "CollectableCompon.h"



// Sets default values
ACollectableCharacter::ACollectableCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ScoreTotal=0;
}

// Called when the game starts or when spawned
void ACollectableCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACollectableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACollectableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACollectableCharacter::AddCollectableScoreToScoreTotal(UCollectableCompon* CollectableCompRef)
{
	if (CollectableCompRef)
	{
		int scoreToAdd = CollectableCompRef->CollectableScore;
		UE_LOG(LogTemp, Warning, TEXT("Added %d to the total score!"), scoreToAdd);
		ScoreTotal += scoreToAdd;
		CollectableCompRef->DestroyOwnerActor();
	}
}
	

