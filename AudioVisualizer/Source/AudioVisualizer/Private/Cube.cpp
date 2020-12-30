// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube.h"

#include "UObject/ConstructorHelpers.h"
#include "Engine/StaticMesh.h"

// Sets default values
ACube::ACube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
}

void ACube::BeginPlay()
{
	Super::BeginPlay();
}

void ACube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}