// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform_0.generated.h"

UCLASS()
class OBSTACKLEASSAULT_1_API AMovingPlatform_0 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform_0();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    UPROPERTY(EditAnywhere)
    int32 Myint = 99;

	UPROPERTY(EditAnywhere)
	float MyFloat = 5.99;

	UPROPERTY(EditAnywhere)
    bool MyBool = true;


};
