// Fill out your copyright notice in the Description page of Project Settings.


#include "EQControler.h"

#include "Kismet/KismetMathLibrary.h"

// Sets default values
AEQControler::AEQControler()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	AudioComponent->SetupAttachment(RootComponent);
	AudioComponent->Activate(false);

	NumCubes = 9;
	CubeDistance = 200;
}

// Called when the game starts or when spawned
void AEQControler::BeginPlay()
{
	SpawnGrid();
	AudioComponent->Play();
}

void AEQControler::SpawnGrid()
{
	for (int i = 0; i < NumCubes; i++)
	{
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		FVector spawnLoc = this->GetActorLocation() + FVector(Rows * CubeDistance, Cols * CubeDistance, 0.0f);
		
		if (ActorToSpawn)
		{
			AActor* actor = GetWorld()->SpawnActor<AActor>(ActorToSpawn, spawnLoc, this->GetActorRotation(), spawnParams);
			Actors.Add(actor);
		}

		Rows++;

		if (Rows == FMath::TruncToFloat(UKismetMathLibrary::Sqrt(NumCubes)))
		{
			Cols++;
			Rows = 0;
		}
	}
}

// Called every frame
void AEQControler::Tick(float DeltaTime)
{
	

}

