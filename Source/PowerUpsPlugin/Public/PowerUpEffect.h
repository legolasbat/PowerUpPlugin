// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PowerUpEffect.generated.h"

UENUM()
enum class EOperation : uint8
{
	Sum		UMETA(DisplayName = "Sum"),
	Product	UMETA(DisplayName = "Product")
};

UCLASS(BlueprintType, Blueprintable, Category = "Editor")
class POWERUPSPLUGIN_API UPowerUpEffect : public UObject
{
	GENERATED_BODY()

public:

	// Parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Variable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Modification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOperation Operation;

	FString GetName() const;
	FName GetVariable() const;
	float GetModification() const;
	float GetDuration() const;
	EOperation GetOperation() const;
};
