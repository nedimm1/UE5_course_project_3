// Fill out your copyright notice in the Description page of Project Settings.


#include "Trigger_Box.h"

UTrigger_Box::UTrigger_Box()
{
    PrimaryComponentTick.bCanEverTick = true;

}

void UTrigger_Box::BeginPlay()
{
	Super::BeginPlay();

    UE_LOG(LogTemp, Display, TEXT("Trigger Component Alive"));

}

void UTrigger_Box::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UE_LOG(LogTemp, Display, TEXT("Trigger Component is ticking"));


}
