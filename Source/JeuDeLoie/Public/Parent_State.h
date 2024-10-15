// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSM_Manager.h"
#include "Parent_State.generated.h"


/**
 * 
 */
UCLASS(Blueprintable)
class JEUDELOIE_API UParent_State : public UObject
{
	GENERATED_BODY()
protected:
	virtual void EnterState(AFSM_Manager stateMachine);
	virtual void Comportement(AFSM_Manager stateMachine);
	virtual void ExitState(AFSM_Manager stateMachine);
};
