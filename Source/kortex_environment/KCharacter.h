#pragma once

#include "GameFramework/Character.h"
#include "KCharacter.generated.h"

UCLASS()
class KORTEX_ENVIRONMENT_API AKCharacter : public ACharacter
{
	GENERATED_BODY()

public:
   
    AKCharacter();
    
    AKCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaSeconds ) override;

    virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
        
    UFUNCTION()
    void MoveForward(float Val);
    UFUNCTION()
    void MoveRight(float Val);
    
	void ToggleStreaming();

	UFUNCTION(BlueprintCallable, Category = "Streaming")
	void ToggleIsSwitching();


	UInputComponent* Input;

	UCameraComponent* MainCamera;
	UCameraComponent* TopCamera;
	UCameraComponent* LeftCamera;
	UCameraComponent* RightCamera;
   
	int32 CurrentCameraIndex;
	bool IsSwitching;

};
