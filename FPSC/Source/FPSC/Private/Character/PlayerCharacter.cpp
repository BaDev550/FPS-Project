#include "Character/PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Weapons/WeaponMaster.h"
#include "Engine/World.h"    
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"
	
APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.f);

	FPCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FPCameraComponent->SetupAttachment(GetCapsuleComponent());
	FPCameraComponent->SetRelativeLocation(FVector(0.f, 0.f, 60.f));
	FPCameraComponent->bUsePawnControlRotation = true;

	FPMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	FPMeshComponent->SetupAttachment(FPCameraComponent);
	FPMeshComponent->bCastDynamicShadow = false;
	FPMeshComponent->CastShadow = false;
	FPMeshComponent->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	FPWeaponActor = CreateDefaultSubobject<UChildActorComponent>(TEXT("WeaponActor"));
	FPWeaponActor->SetupAttachment(GetFPSMesh());
	FPWeaponActor->AttachToComponent(FPMeshComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, "WeaponSocket");
	FPWeaponActor->SetChildActorClass(AWeaponMaster::StaticClass());
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::MoveForward(const float value)
{
	if (value != 0.0f) {
		FVector ForwardVector = GetActorForwardVector();
		AddMovementInput(ForwardVector, value);
	}
}

void APlayerCharacter::MoveLeftRight(const float value)
{
	if (value != 0.0f) {
		FVector RightVector = GetActorRightVector();
		AddMovementInput(RightVector, value);
	}
}

void APlayerCharacter::LookUpDown(const float value)
{
	if (value != 0.0f) {
		AddControllerPitchInput(value);
	}
}

void APlayerCharacter::LookLeftRight(const float value)
{
	if (value != 0.0f) {
		AddControllerYawInput(value);
	}
}

void APlayerCharacter::Fire()
{
	FHitResult Result;
	FVector Start = FPCameraComponent->GetComponentLocation();
	FVector CameraForwardVec = FPCameraComponent->GetForwardVector();
	FVector End = Start + CameraForwardVec * WeaponDistance;

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(Result, Start, End, ECollisionChannel::ECC_Visibility, Params, FCollisionResponseParams())) {
		UE_LOG(LogTemp, Log, TEXT("LineHit"));
	}
	DrawDebugLine(GetWorld(), Start, End, Result.bBlockingHit ? FColor::Green : FColor::Red, false, 5.f, 0.f, 2.f);
}

void APlayerCharacter::Crouch()
{
	ACharacter::Crouch();
}

void APlayerCharacter::UnCrouch()
{
	FHitResult CResult;
	FVector Start = GetCapsuleComponent()->GetComponentLocation();
	FVector End = Start + FVector(0.f, 0.f, GetCapsuleComponent()->GetScaledCapsuleHalfHeight() + 70.f);
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (!GetWorld()->LineTraceSingleByChannel(CResult, Start, End, ECollisionChannel::ECC_Visibility, Params, FCollisionResponseParams())) {
		ACharacter::UnCrouch();
		UE_LOG(LogTemp, Log, TEXT("Can Uncrouch"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot Uncrouch"));
	}
	DrawDebugLine(GetWorld(), Start, End, CResult.bBlockingHit ? FColor::Green : FColor::Red, false, 5.f, 0.f, 2.f);
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (InputComponent)
	{
		PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
		PlayerInputComponent->BindAxis("MoveLeft/Right", this, &APlayerCharacter::MoveLeftRight);
		PlayerInputComponent->BindAxis("LookUp/Down", this, &APlayerCharacter::LookUpDown);
		PlayerInputComponent->BindAxis("LookLeft/Right", this, &APlayerCharacter::LookLeftRight);
		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
		PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
		PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &APlayerCharacter::Crouch);
		PlayerInputComponent->BindAction("Crouch", IE_Released, this, &APlayerCharacter::UnCrouch);

		PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::Fire);
	}
}

