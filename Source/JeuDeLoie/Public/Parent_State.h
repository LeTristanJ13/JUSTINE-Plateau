// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Parent_State.generated.h"

/**
 * 
 */
UCLASS()
class JEUDELOIE_API UParent_State : public UObject
{
	GENERATED_BODY()
	
	virtual void EnterState();
	virtual void Comportement();
	virtual void ExitState();
};
