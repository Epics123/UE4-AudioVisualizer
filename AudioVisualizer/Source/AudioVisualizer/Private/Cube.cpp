// Fill out your copyright notice in the Description page of Project Settings.


#include "Cube.h"

#include "UObject/ConstructorHelpers.h"

// Sets default values
ACube::ACube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>CubeAsset(TEXT("StaticMesh'/Game/Meshes/Cube.Cube'"));
	StaticMesh->SetStaticMesh(CubeAsset.Object);
}

// Called when the game starts or when spawned
void ACube::BeginPlay()
{
	
	
}

// Called every frame
void ACube::Tick(float DeltaTime)
{
	

}

