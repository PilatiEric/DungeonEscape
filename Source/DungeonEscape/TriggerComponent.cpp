// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	UE_LOG(LogTemp, Display, TEXT("Trigger Component Created"));
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();
	if (MoverActor != nullptr)
	{
		Mover = MoverActor->FindComponentByClass<UMover>();
		if (Mover != nullptr)
		{
			UE_LOG(LogTemp, Display, TEXT("Successfully found mover component!"));
			Mover->ShouldMove = true;
		}
		else
		{
			UE_LOG(LogTemp, Display, TEXT("Failed to find mover component!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("MoverActor is nullptr"));
	}
}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
