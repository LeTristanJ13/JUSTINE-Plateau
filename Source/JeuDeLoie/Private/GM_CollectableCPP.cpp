#include "GM_CollectableCPP.h"

void AGM_CollectableCPP::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("BeginPlay de AGM_CollectableCPP appelé"));
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AGM_CollectableCPP::IncrementTime, 1.0f, true);

    UE_LOG(LogTemp, Warning, TEXT("Timer démarré !"));
}

void AGM_CollectableCPP::IncrementTime()
{
    Seconde++;
    OnAddSecond();

    if (Seconde >= 60)
    {
        Seconde = 0;
        Minute++;
    }


    UE_LOG(LogTemp, Warning, TEXT("Temps : %d minute(s), %d seconde(s)"), Minute, Seconde);
}
