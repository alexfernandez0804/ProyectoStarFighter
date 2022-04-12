// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potenciador.generated.h"

UCLASS()
class PROYECTOSTARFIGHTER_API APotenciador : public AActor
{
	GENERATED_BODY()
	
private:
	float Velocidad;
	float Tamano;
	float UbicacionInicialX;
	float UbicacionInicialY;

public:	
	// Sets default values for this actor's properties
	APotenciador();

	float UbicacionX;
	float UbicacionY;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
