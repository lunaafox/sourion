#include "include.h"

DWORD LocalPlayer::Get()
{
	Engine E;
	return *(DWORD*)(E.GameModule() + dwLocalPlayer)
		;
}
bool LocalPlayer::Exists()
{
	Engine E;
	if (*(DWORD*)(E.GameModule() + dwLocalPlayer))
	{
		return true;
	}
	return false;
}
void LocalPlayer::ForceJump()
{
	Engine E;
	*(DWORD*)(E.GameModule() + dwForceJump) = 6;
}