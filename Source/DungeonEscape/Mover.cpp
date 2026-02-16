// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	float MyFloat = 10.f;
	float* PointerToMyFloat = &MyFloat;

	float Result = *PointerToMyFloat + 5.f; //15.f

	UE_LOG(LogTemp, Display, TEXT("Result: %f"), Result);
	

	*PointerToMyFloat = 30.f;
	UE_LOG(LogTemp, Display, TEXT("MyFloat: %f"), MyFloat);
	UE_LOG(LogTemp, Display, TEXT("*PointerToMyFloat: %f"), *PointerToMyFloat);
	UE_LOG(LogTemp, Display, TEXT("PointerToMyFloat: %p"), PointerToMyFloat);



	FVector MyVector = FVector(1.f, 1.f, 1.f);

	FVector* PointerToMyVector = &MyVector;

	PointerToMyVector -> X = 2.f;
	PointerToMyVector -> Y = 2.f;
	PointerToMyVector -> Z = 2.f;

	FString MyVectorString = MyVector.ToCompactString();
	UE_LOG(LogTemp, Display, TEXT("PointerToMyFloat: %s"), *MyVectorString);
}


// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

