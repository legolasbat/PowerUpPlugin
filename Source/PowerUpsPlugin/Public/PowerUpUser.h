// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <stack>
#include "CoreMinimal.h"
#include "PowerUpEffect.h"
#include "Components/ActorComponent.h"
#include "PowerUpUser.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class POWERUPSPLUGIN_API UPowerUpUser : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPowerUpUser();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "PowerUps")
	void AddPowerUp(TSubclassOf<UPowerUpEffect> PowerUp);
	
	UFUNCTION(BlueprintCallable, Category = "PowerUps")
	void AddPowerUps(TArray<TSubclassOf<UPowerUpEffect>> PowerUps);

	UFUNCTION(BlueprintCallable, Category = "PowerUps")
	void RemoveAllPowerUps();
	
private:
	void CheckDurations(float DeltaTime);
	bool AddProperty(UPowerUpEffect* PowerUpToAdd);
	void ApplyPowerUps();
	void ReapplyPowerUps();
	void RemovePowerUp(UPowerUpEffect* PowerUpToRemove);
	bool IsPropertyFloat(FProperty* Property);
	bool IsPropertyInt(FProperty* Property);

	bool Dirty = false;

	UPROPERTY()
	TArray<UPowerUpEffect*> PuStack;
};
