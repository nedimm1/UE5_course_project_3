// Fill out your copyright notice in the Description page of Project Settings.


#include "Trigger_Box.h"

UTrigger_Box::UTrigger_Box()
{
    PrimaryComponentTick.bCanEverTick = true;

}

void UTrigger_Box::BeginPlay()
{
	Super::BeginPlay();


}

void UTrigger_Box::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* Actor = GetAcceptableActor();
    if(Actor != nullptr)
    {
      Mover->SetShoudMove(true);
    }

    else
    {
      Mover->SetShoudMove(false);
    }

}

void UTrigger_Box::SetMover(UMover* MyMover)
{
  Mover = MyMover;
}

AActor* UTrigger_Box::GetAcceptableActor() const
{
    AActor* ReturnActor = nullptr;
    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    for(AActor* Actor: Actors)
    {
        if(Actor->ActorHasTag(MyActorTag))
        {
          return Actor;
      
        }

    
    }

    return nullptr;
    }