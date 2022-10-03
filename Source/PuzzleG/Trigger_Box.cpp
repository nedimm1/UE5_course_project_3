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

    TArray<AActor*> Actors;
    GetOverlappingActors(Actors);

    if (Actors.Num() > 0)
    {
        FString ActorName = Actors[0]->GetActorNameOrLabel();
        UE_LOG(LogTemp, Display, TEXT("Overlapping: %s"), *ActorName);
    }

}
