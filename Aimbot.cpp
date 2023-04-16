#pragma once
#include "input.hpp"
// Source made by Create#5488
// Release Date: 02.02.2023 
// Updated to Latest Patch
// If you need help dm me -> Create#5488
float Smoothness = 5;

double NRX;
double NRY;
void aimbot(float xscreen, float yscreen)
{
	float screen_center_x = (Width / 2);
	float screen_center_y = (Height / 2);
	float TargetX = 0;
	float TargetY = 0;
	if (xscreen != 0)
	{
		if
		(xscreen > screen_center_x)
		{TargetX = -(screen_center_x - xscreen);TargetX /= 1.0f;if (TargetX + screen_center_x > screen_center_x * 2)TargetX = 0;
		}
		if 
		(xscreen < screen_center_x)
		{TargetX = xscreen - screen_center_x;TargetX /= 1.0f;if (TargetX + screen_center_x < 0)TargetX = 0;
		}
	}
	if (yscreen != 0)
	{
		if 
		(yscreen > screen_center_y)
		{TargetY = -(screen_center_y - yscreen);TargetY /= 1.0f;if (TargetY + screen_center_y > screen_center_y * 2) TargetY = 0;
		}
		if
		(yscreen < screen_center_y)
		{TargetY = yscreen - screen_center_y;TargetY /= 1.0f;if (TargetY + screen_center_y < 0) TargetY = 0;
		}
	}
	int x = floor(TargetX / Smoothness);
	int y = floor(TargetY / Smoothness);
	MouseController::Move_Mouse((x + NRX), (y - NRY));
	return;
}