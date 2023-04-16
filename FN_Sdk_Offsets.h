#pragma once
#include <Windows.h>

#define GWorld 0x1078B858 // gworld is a pointer of uworld. 

namespace OFFSETS
{
    // TeamIndex - TeamID - ActorID
    uintptr_t TeamId = 0x10B0;

    // Local
    uintptr_t LocalActorPos = 0x128;
    uintptr_t LocalPawn = 0x330;
    uintptr_t LocalPlayers = 0x38;

    // Player - BoneArray
    uintptr_t BoneArray = 0x5f0;
    uintptr_t PlayerState = 0x2A8; 
    uintptr_t PlayerArray = 0x2a0;
    uintptr_t PlayerController = 0x30;
    uintptr_t PlayerCameraManager = 0x340;

    // Game - World
    uintptr_t Gameinstance = 0x1B8;
    uintptr_t GameState = 0x158;
    uintptr_t ComponetToWorld = 0x240;

    // Actor
    uintptr_t ActorCount = 0xA0;
    uintptr_t AActor = 0x98;
    uintptr_t CurrentActor = 0x300;

    // Other
    uintptr_t RootComponet = 0x190;
    uintptr_t PersistentLevel = 0x30;
    uintptr_t Mesh = 0x310;
    uintptr_t Velocity = 0x170;
    uintptr_t PawnPrivate = 0x300;
    uintptr_t ReviveFromDBNOTime = 0x4480;

    // Visible Check
    uintptr_t fLastSubmitTime = 0x358;
    uintptr_t fLastRenderTimeOnScreen = 0x360;
}
