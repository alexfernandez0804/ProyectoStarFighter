// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Proyectil.generated.h"

UCLASS()
class PROYECTOSTARFIGHTER_API AProyectil : public AActor
{
	GENERATED_BODY()
	
private:
	float Velocidad;
	float Tamano;
	float DistanciaMaxima;
	float UbicacionInicialX;
	float UbicacionInicialY;
	float DanoPotenciado;

public:	
	// Sets default values for this actor's properties
	AProyectil();

	float UbicacionX;
	float UbicacionY;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
