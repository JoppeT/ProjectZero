// Player Controller by Jacob Tjernström

#pragma once

#include "Perception/AISightTargetInterface.h"
#include "CoreMinimal.h"
#include "Engine/Engine.h"
#include "GameFramework/Character.h"
#include "MyCharacter2.generated.h"

UCLASS(config = game)
class AMyCharacter2 : public ACharacter, public IAISightTargetInterface
{
	GENERATED_BODY()

public:
	virtual bool CanBeSeenFrom(
		const FVector& ObserverLocation,
		FVector& OutSeenLocation,
		int32& NumberOfLoSChecksPerformed,
		float& OutSightStrength,
		const AActor* IgnoreActor,
		const bool* bWasVisible,
		int32* UserData
	) const;

	// Sets default values for this character's properties
	AMyCharacter2();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
