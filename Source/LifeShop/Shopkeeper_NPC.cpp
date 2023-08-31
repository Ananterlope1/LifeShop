// Fill out your copyright notice in the Description page of Project Settings.


#include "Shopkeeper_NPC.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "LifeShopCharacter.h"

// Sets default values
AShopkeeper_NPC::AShopkeeper_NPC()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	HitBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger_Box"));
	

}

// Called when the game starts or when spawned
void AShopkeeper_NPC::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AShopkeeper_NPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShopkeeper_NPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



