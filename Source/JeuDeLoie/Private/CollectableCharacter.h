// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CollectableCharacter.generated.h"

UCLASS()
class ACollectableCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACollectableCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable, Category = "Score")
	virtual void AddCollectableScoreToScoreTotal(UCollectableCompon* CollectableCompRef);

protected:
	// Variable pour stocker le score total
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int ScoreTotal;
};
