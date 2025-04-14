// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_versionedPickUpComponent.h"

UFPS_versionedPickUpComponent::UFPS_versionedPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UFPS_versionedPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UFPS_versionedPickUpComponent::OnSphereBeginOverlap);
}

void UFPS_versionedPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AFPS_versionedCharacter* Character = Cast<AFPS_versionedCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
