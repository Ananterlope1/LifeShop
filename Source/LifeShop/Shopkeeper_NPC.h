// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Shopkeeper_NPC.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;

UCLASS()
class LIFESHOP_API AShopkeeper_NPC : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShopkeeper_NPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category="Components")
	UBoxComponent* HitBox;

	UPROPERTY(VisibleAnywhere, Category="Components")
	USkeletalMeshComponent* SkeletalMesh;

	/** called when something enters the triggerbox component */
	// UFUNCTION()
	// void OnOverlapBegin(class UPrimitiveComponent* Comp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = "true"))
	TArray<int32> Inventory;
};
