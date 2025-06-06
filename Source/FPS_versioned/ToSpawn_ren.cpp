// Fill out your copyright notice in the Description page of Project Settings.


#include "ToSpawn_ren.h"


// Sets default values
AToSpawn_ren::AToSpawn_ren()
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AToSpawn_ren::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AToSpawn_ren::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

