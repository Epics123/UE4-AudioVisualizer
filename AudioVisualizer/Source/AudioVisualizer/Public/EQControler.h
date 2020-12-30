// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"

#include "Cube.h"

#include "EQControler.generated.h"


UCLASS()
class AUDIOVISUALIZER_API AEQControler : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEQControler();

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Audio")
	UAudioComponent* AudioComponent;

	UPROPERTY(EditAnywhere)
	int NumCubes;
	UPROPERTY(EditAnywhere)
	int Rows;
	UPROPERTY(EditAnywhere)
	int Cols;
	UPROPERTY(EditAnywhere)
	float CubeDistance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AActor> ActorToSpawn;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AActor*> Actors;

	UFUNCTION(BlueprintCallable)
	void SpawnGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
