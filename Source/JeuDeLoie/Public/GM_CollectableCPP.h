// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GM_CollectableCPP.generated.h"

/**
 * Classe de GameMode avec un Timer simple qui compte minutes et secondes
 */
UCLASS()
class JEUDELOIE_API AGM_CollectableCPP : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override; // Override de BeginPlay

private:
    void IncrementTime(); // Fonction appelée par le Timer

    // Variables pour le temps
protected:
    // Variables pour le temps (Exposées à Blueprint)
    UPROPERTY(BlueprintReadWrite, Category = "Timer")
    int Seconde = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Timer")
    int Minute = 0;

    UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
    void OnAddSecond();


    // Handle pour le Timer
    FTimerHandle TimerHandle;
};