// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	Player,
	AI,
	Unknown
};

UCLASS()
class SALWARTS_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Units)
	TArray<AMyCharacter*> VisibleUnits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	float MaxHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	float CurrentHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	float CooldownBetweenAttacks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	float AttackDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	float DamagePerAttack;


	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true), Category = Teams)
	ETeam Team;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	bool bIsAttacking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Parameters)
	bool bCanAttack;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Attack();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void MoveTo();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void DamageReceived(float Amount);

};
