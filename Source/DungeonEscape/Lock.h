// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TriggerComponent.h"					//Or whatever you called your trigger component
#include "Components/StaticMeshComponent.h"

#include "Lock.generated.h"

UCLASS()
class DUNGEONESCAPE_API ALock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	USceneComponent* RootComp;			//This is what we'll be attaching everything else to

	UPROPERTY(VisibleAnywhere)
	UTriggerComponent* TriggerComp;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* KeyItemMesh;

};
