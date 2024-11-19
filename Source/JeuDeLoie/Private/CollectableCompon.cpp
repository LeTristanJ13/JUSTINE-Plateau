// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableCompon.h"


// Sets default values for this component's properties
UCollectableCompon::UCollectableCompon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	

	// ...
}


// Called when the game starts
void UCollectableCompon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCollectableCompon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCollectableCompon::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	// Vérification que OtherActor n'est pas nul et qu'il est différent de "this"
	if (OtherActor != nullptr)
	{
		// Vérifier si le nom de l'acteur contient "BP_ThirdPersonCharacter"
		if (OtherActor->GetName().Contains(TEXT("BP_ThirdPersonCharacter")))
		{
			UE_LOG(LogTemp, Warning, TEXT("Overlap with BP_ThirdPersonCharacter!"));
            
			// Utilisation d'UE_LOG pour afficher un message de débogage dans la console Unreal
			UE_LOG(LogTemp, Warning, TEXT("wtf"));

			// Pour afficher un message sur l'écran (optionnel)
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("wtf"));
			}
		}
	}

	
}void UCollectableCompon::DestroyOwnerActor()
{
	// Vérifiez si le composant a un propriétaire valide
	AActor* OwnerActor = GetOwner();
	if (OwnerActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Destroying owner actor: %s"), *OwnerActor->GetName());

		// Détruire l'acteur propriétaire
		OwnerActor->Destroy();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner actor is null, cannot destroy."));
	}
}

