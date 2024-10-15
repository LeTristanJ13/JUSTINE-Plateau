// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM_Manager.h"

// Sets default values
AFSM_Manager::AFSM_Manager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFSM_Manager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFSM_Manager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFSM_Manager::ChangeState(AState* newState) {

	if (CurrentState) {
		CurrentState->ExitState(this);
	}
	CurrentState = newState;

	if (CurrentState) {
		CurrentState->EnterState(this);
	}
		
	void AFSM_Manager::Comportement() {
		if (CurrentState) {
			CurrentState->Behaviour(this);
		}
	}
}

