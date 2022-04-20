// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpEffect.h"

FString UPowerUpEffect::GetName() const
{
	return Name;
}

FName UPowerUpEffect::GetVariable() const
{
	return Variable;
}

float UPowerUpEffect::GetModification() const
{
	return Modification;
}

float UPowerUpEffect::GetDuration() const
{
	return Duration;
}

EOperation UPowerUpEffect::GetOperation() const
{
	return Operation;
}