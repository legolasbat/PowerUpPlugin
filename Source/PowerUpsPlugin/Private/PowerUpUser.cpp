// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUpUser.h"

#include <string>

// Sets default values for this component's properties
UPowerUpUser::UPowerUpUser()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPowerUpUser::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPowerUpUser::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	CheckDurations(DeltaTime);
	if(Dirty)
	{
		ReapplyPowerUps();
	}
	
}

void UPowerUpUser::CheckDurations(float DeltaTime)
{	
	TArray<UPowerUpEffect*> TempStack;

	UPowerUpEffect* PowerUpEffect;

	while(PuStack.Num() != 0)
	{
		PowerUpEffect = PuStack.Top();
		PuStack.Pop();
		PowerUpEffect->Duration -= DeltaTime;
		if(PowerUpEffect->GetDuration() <= 0.0f)
		{
			Dirty = true;
		}
		TempStack.Push(PowerUpEffect);
	}

	while(TempStack.Num() != 0)
	{
		PowerUpEffect = TempStack.Top();
		TempStack.Pop();
		PuStack.Push(PowerUpEffect);
	}
}

void UPowerUpUser::AddPowerUp(TSubclassOf<UPowerUpEffect> PowerUp)
{
	UPowerUpEffect* NewPowerUp = NewObject<UPowerUpEffect>(this, PowerUp);
	if(NewPowerUp == nullptr)
		return;

	if(NewPowerUp->GetOperation() == EOperation::Product && NewPowerUp->GetModification() == 0.0f)
	{
		NewPowerUp->Modification = SMALL_NUMBER;
	}
		
	if(AddProperty(NewPowerUp))
	{
		if(NewPowerUp->GetDuration() != 0)
			PuStack.Push(NewPowerUp);

		NewPowerUp->OnActivate(GetOwner());
	}
}

void UPowerUpUser::AddPowerUps(TArray<TSubclassOf<UPowerUpEffect>> PowerUps)
{
	for (TSubclassOf<UPowerUpEffect> PowerUp : PowerUps)
	{
		AddPowerUp(PowerUp);
	}
}

bool UPowerUpUser::HavePowerUp(TSubclassOf<UPowerUpEffect> PowerUp)
{
	UPowerUpEffect* NewPowerUp = NewObject<UPowerUpEffect>(this, PowerUp);
	if(NewPowerUp == nullptr)
		return false;

	IndexSearch = 0;
	for (UPowerUpEffect* PU : PuStack)
	{
		if(PU->GetName().Equals(NewPowerUp->GetName()))
		{
			if(PU->GetModification() == NewPowerUp->GetModification())
			{
				if(PU->GetVariable().IsEqual(NewPowerUp->GetVariable()))
				{
					return true;
				}
			}
		}

		IndexSearch++;
	}
	return false;
}

UPowerUpEffect* UPowerUpUser::FindPowerUp(TSubclassOf<UPowerUpEffect> PowerUp)
{
	if(HavePowerUp(PowerUp))
	{
		return PuStack[IndexSearch];
	}

	return nullptr;
}

float UPowerUpUser::RemainingTimeForPowerUp(TSubclassOf<UPowerUpEffect> PowerUp)
{
	if(HavePowerUp(PowerUp))
	{
		return PuStack[IndexSearch]->Duration;
	}

	return -1.0f;
}

bool UPowerUpUser::RemovePowerUp(TSubclassOf<UPowerUpEffect> PowerUp)
{
	if(HavePowerUp(PowerUp))
	{
		PuStack[IndexSearch]->Duration = 0.0f;
		return true;
	}

	return false;
}

void UPowerUpUser::RemoveAllPowerUps()
{
	UPowerUpEffect* PowerUpEffect;

	while(PuStack.Num() != 0)
	{
		PowerUpEffect = PuStack.Top();
		PuStack.Pop();
		PowerUpEffect->Duration = 0.0f;
		RemovePowerUp(PowerUpEffect);
	}
}

void UPowerUpUser::ApplyPowerUps(){
	TArray<UPowerUpEffect*> TempStack;

	UPowerUpEffect* PowerUpEffect;

	while(PuStack.Num() != 0)
	{
		PowerUpEffect = PuStack.Top();
		PuStack.Pop();
		AddProperty(PowerUpEffect);
		TempStack.Push(PowerUpEffect);
	}

	while(TempStack.Num() != 0)
	{
		PowerUpEffect = TempStack.Top();
		TempStack.Pop();
		PuStack.Push(PowerUpEffect);
	}
}

void UPowerUpUser::ReapplyPowerUps()
{
	TArray<UPowerUpEffect*> TempStack;

	UPowerUpEffect* PowerUpEffect;

	while(PuStack.Num() != 0)
	{
		PowerUpEffect = PuStack.Top();
		PuStack.Pop();
		
		RemovePowerUp(PowerUpEffect);
		
		if(PowerUpEffect->GetDuration() > 0.0f)
			TempStack.Push(PowerUpEffect);
	}

	while(TempStack.Num() != 0)
	{
		PowerUpEffect = TempStack.Top();
		TempStack.Pop();

		AddProperty(PowerUpEffect);
		
		PuStack.Push(PowerUpEffect);
	}
}

void UPowerUpUser::RemovePowerUp(UPowerUpEffect* PowerUpToRemove)
{
    FName Variable = PowerUpToRemove->GetVariable();
	FString VarString = Variable.ToString();

	FString MainVar;
	FString ChildVar;
	
	if(!VarString.Split(".", &MainVar, &ChildVar))
	{
		MainVar = VarString;
	}
	
	FProperty* PropertyVariable = GetOwner()->GetClass()->FindPropertyByName(FName(MainVar));
	if(PropertyVariable == nullptr)
		return;

	void* Data = PropertyVariable->ContainerPtrToValuePtr<void>(GetOwner(), 0);

	// Check for variable in component
	if(FObjectPropertyBase* ObjectPropertyBase = CastField<FObjectPropertyBase>(PropertyVariable))
	{
		UObject* Component = ObjectPropertyBase->GetObjectPropertyValue(Data);
		if(Component->IsA(UActorComponent::StaticClass()))
		{
			PropertyVariable = Component->GetClass()->FindPropertyByName(FName(ChildVar));
			Data = PropertyVariable->ContainerPtrToValuePtr<void>(Component, 0);
		}
	}
	
	if(IsPropertyFloat(PropertyVariable))
	{
		FNumericProperty* NumericPropertyVariable = CastField<FNumericProperty>(PropertyVariable);
		double Value = NumericPropertyVariable->GetFloatingPointPropertyValue(Data);
		
		if(PowerUpToRemove->GetOperation() == EOperation::Sum)
		{
			Value -= PowerUpToRemove->GetModification();
		} else if(PowerUpToRemove->GetOperation() == EOperation::Product)
		{
			Value /= PowerUpToRemove->GetModification();
		}
		
		NumericPropertyVariable->SetFloatingPointPropertyValue(Data, Value);
	}
	else if (IsPropertyInt(PropertyVariable))
	{
		FNumericProperty* NumericPropertyVariable = CastField<FNumericProperty>(PropertyVariable);
		int64 Value = NumericPropertyVariable->GetSignedIntPropertyValue(Data);
		
		if(PowerUpToRemove->GetOperation() == EOperation::Sum)
		{
			Value -= PowerUpToRemove->GetModification();
		} else if(PowerUpToRemove->GetOperation() == EOperation::Product)
		{
			Value /= PowerUpToRemove->GetModification();
		}
		
		NumericPropertyVariable->SetIntPropertyValue(Data, Value);
	}

	if(PowerUpToRemove->GetDuration() <= 0.0f)
	{
		PowerUpToRemove->OnDeactivate(GetOwner());
	}
}

bool UPowerUpUser::AddProperty(UPowerUpEffect* PowerUpToAdd)
{
	FName Variable = PowerUpToAdd->GetVariable();
	FString VarString = Variable.ToString();

	FString MainVar;
	FString ChildVar;
	
	if(!VarString.Split(".", &MainVar, &ChildVar))
	{
		MainVar = VarString;
	}
	
	FProperty* PropertyVariable = GetOwner()->GetClass()->FindPropertyByName(FName(MainVar));
	if(PropertyVariable == nullptr)
		return false;

	void* Data = PropertyVariable->ContainerPtrToValuePtr<void>(GetOwner(), 0);

	// Check for variable in component
	if(FObjectPropertyBase* ObjectPropertyBase = CastField<FObjectPropertyBase>(PropertyVariable))
	{
		UObject* Component = ObjectPropertyBase->GetObjectPropertyValue(Data);
		if(Component->IsA(UActorComponent::StaticClass()))
		{
			PropertyVariable = Component->GetClass()->FindPropertyByName(FName(ChildVar));
			Data = PropertyVariable->ContainerPtrToValuePtr<void>(Component, 0);
		}
	}
	
	if(IsPropertyFloat(PropertyVariable))
	{
		FNumericProperty* NumericPropertyVariable = CastField<FNumericProperty>(PropertyVariable);
		double Value = NumericPropertyVariable->GetFloatingPointPropertyValue(Data);
		
		if(PowerUpToAdd->GetOperation() == EOperation::Sum)
		{
			Value += PowerUpToAdd->GetModification();
		} else if(PowerUpToAdd->GetOperation() == EOperation::Product)
		{
			Value *= PowerUpToAdd->GetModification();
		}
		
		NumericPropertyVariable->SetFloatingPointPropertyValue(Data, Value);
		return true;
	}
	if (IsPropertyInt(PropertyVariable))
	{
		FNumericProperty* NumericPropertyVariable = CastField<FNumericProperty>(PropertyVariable);
		int64 Value = NumericPropertyVariable->GetSignedIntPropertyValue(Data);
		
		if(PowerUpToAdd->GetOperation() == EOperation::Sum)
		{
			Value += PowerUpToAdd->GetModification();
		} else if(PowerUpToAdd->GetOperation() == EOperation::Product)
		{
			Value *= PowerUpToAdd->GetModification();
		}
		
		NumericPropertyVariable->SetIntPropertyValue(Data, Value);
		return true;
	}
	return false;
}

bool UPowerUpUser::IsPropertyFloat(FProperty* Property)
{
	if(FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
	{
		return NumericProperty->IsFloatingPoint();
	}
	return false;
}

bool UPowerUpUser::IsPropertyInt(FProperty* Property)
{
	if(FNumericProperty* NumericProperty = CastField<FNumericProperty>(Property))
	{
		return NumericProperty->IsInteger();
	}
	return false;
}

