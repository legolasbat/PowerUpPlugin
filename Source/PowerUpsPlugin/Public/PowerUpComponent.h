// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUpEffect.h"
#include "PowerUpUser.h"
#include "Components/ActorComponent.h"
#include "PowerUpComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POWERUPSPLUGIN_API UPowerUpComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UPowerUpComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
		void GetPowerUp();

	UFUNCTION(BlueprintCallable)
		void ActivatePowerUp(UPowerUpUser* PowerUpUser);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UPowerUpEffect>> effects;
};
