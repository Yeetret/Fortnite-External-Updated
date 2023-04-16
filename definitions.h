#include <Windows.h>
#include <iostream>

namespace def
{
	// Aimbot Definition's
	bool Aimbot = false;
	static int aimkey;
	static int hitbox;
	float AimbotFov = 150;
	static int VisDist = 100;
	static int aimkeypos = 1;
	static int hitboxpos = 0;
}

// Fov - Crosshair - AimKey
bool fovcircle = false;
bool square_fov = false;
bool crosshair = true;
bool fovcirclefilled = false;
bool circletype = false;
int keybind = 0;
bool SquareFovFilled = false; 
int CrosshairSize = 10;


// Esp
bool SelfEsp = false;
bool Esp = true;
bool CornerBoxEsp = false;
bool ThreeDBoxEsp = false;
bool BoxEsp = false;
bool PlayerDistanceEsp = false;
bool Snaplines = false;
bool drawbase = true;
bool slefESP = false;
bool fillbox = false;
bool thick = false;
float BoxWidthValue = 0.550;
int LineThinkness = 1;
int Boxthinkness = 0.5;
float ChangerFOV = 80;
bool Skeleton = false;

// Other
int RenderOption = 0;
int tab;
bool WindowStreamProof = false;
bool reloadcheck = false;
bool targetingcheck = false;
bool norecoil = false;
bool DynamicEsp = false;


bool AimWhileJumping = true;
bool AirStuck = false;
bool InstaRes = false;
bool carFly = false;


// Menu
bool ShowMenu = true;
