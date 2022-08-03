// Fill out your copyright notice in the Description page of Project Settings.


#include "CharMovement.h"

// Sets default values
ACharMovement::ACharMovement()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
	//Some variables for ticks (information in up here!) and for locking controller rotation
	PrimaryActorTick.bCanEverTick = true;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//Pointers for character Movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 450.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	//Creation of the camera and attach to the rootComponent AKA: Capsule Component
	ThaCamera = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThaCamera"));
	ThaCamera->SetupAttachment(RootComponent);
	
	//Camera Properties
	ThaCamera->TargetArmLength = 300.0f;
	ThaCamera->bUsePawnControlRotation = true;

	//Camera properties creation and attach to the Camera
	CameraFollow = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraFollow"));
	CameraFollow->SetupAttachment(ThaCamera, USpringArmComponent::SocketName);

	CameraFollow->bUsePawnControlRotation = false;
}

void ACharMovement::MoveFoward(float Axis)
{
	//Rotate the character
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	//Move the character in the X Axis
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	AddMovementInput(Direction, Axis);
}

void ACharMovement::MoveRight(float Axis)
{
	//Rotate the character
	FRotator Rotation = Controller->GetControlRotation();
	FRotator YawRotation(0.0f, Rotation.Yaw, 0.0f);

	//Move the character in the Y Axis
	FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	AddMovementInput(Direction, Axis);
}

// Called when the game starts or when spawned
void ACharMovement::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharMovement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharMovement::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Move the camera
	PlayerInputComponent->BindAxis("TurnX", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnY", this, &APawn::AddControllerPitchInput);

	//Jump the character
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Move the character
	PlayerInputComponent->BindAxis("Horizontal", this, &ACharMovement::MoveRight);
	PlayerInputComponent->BindAxis("Vertical", this, &ACharMovement::MoveFoward);

}

