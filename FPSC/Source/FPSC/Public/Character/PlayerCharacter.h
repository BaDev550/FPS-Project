// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

// Forward Declaration
class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class AWeaponMaster;

UCLASS()
class FPSC_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent* FPMeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	UChildActorComponent* FPWeaponActor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FPCameraComponent;
public:
	APlayerCharacter();

	UPROPERTY(VisibleAnywhere, Category = "Weapon System")
	float WeaponDistance = 10000.f;
protected:
	virtual void BeginPlay() override;

	void MoveForward(const float value);
	void MoveLeftRight(const float value);

	void LookUpDown(const float value);
	void LookLeftRight(const float value);
public:	
	UFUNCTION(BlueprintCallable, Category = "Weapon System")
	void Fire();
	void Crouch();
	void UnCrouch();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	USkeletalMeshComponent* GetFPSMesh() const { return FPMeshComponent; }
	UCameraComponent* GetFPSCamera() const { return FPCameraComponent; }
};
