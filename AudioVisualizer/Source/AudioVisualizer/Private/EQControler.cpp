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

	NumCubes = 9;
	CubeDistance = 200;

	SpawnGrid();
}

// Called when the game starts or when spawned
void AEQControler::BeginPlay()
{
	AudioComponent->Play();
}

void AEQControler::SpawnGrid()
{
	for (int i = 0; i < NumCubes - 1; i++)
	{
		FVector spawnLoc = FVector();

		spawnLoc.X = Rows * CubeDistance;
		spawnLoc.Y = Cols * CubeDistance;

		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		ACube* cube;
		ACube* actor = GetWorld()->SpawnActor<ACube>(cube, spawnLoc, GetActorRotation(), spawnParams);
		Cubes.Add(cube);

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
