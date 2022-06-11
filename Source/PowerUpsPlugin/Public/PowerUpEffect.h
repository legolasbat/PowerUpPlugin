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
	
	UFUNCTION(BlueprintImplementableEvent)
	void OnActivate(AActor* AffectedActor);

	UFUNCTION(BlueprintImplementableEvent)
	void OnDeactivate(AActor* AffectedActor);
	
	// Parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	FName Variable;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float Modification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Parameters")
	EOperation Operation;

	FString GetName() const;
	FName GetVariable() const;
	float GetModification() const;
	float GetDuration() const;
	EOperation GetOperation() const;
};
