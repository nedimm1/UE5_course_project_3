// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mover.h"
#include "Trigger_Box.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PUZZLEG_API UTrigger_Box : public UBoxComponent
{
	GENERATED_BODY()

public:
    UTrigger_Box();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void SetMover(UMover* MyMover);
	


private:
    UPROPERTY(EditAnywhere)
	FName MyActorTag;

	UMover* Mover;

	AActor* GetAcceptableActor() const;
};
