// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FSM_Manager.generated.h"

UCLASS()
class JEUDELOIE_API AFSM_Manager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFSM_Manager();

	UPROPERTY()
	AState*CurrentState

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void ChangeState(AState newState);

	UFUNCTION()
		void comportement();

};
