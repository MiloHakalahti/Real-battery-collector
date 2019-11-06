// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"


//Set default value
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	//the base power level of the battery
	BatteryPower = 150.0f;

}

void ABatteryPickup::WasCollected_Implementation()
{
	// use the base pickup behavior
	Super::WasCollected_Implementation();
	//destroy battery
	Destroy();
}

//report the battery power
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}