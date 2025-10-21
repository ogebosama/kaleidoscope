#include "stdafx.h"
#include "player.h"

void PlayerInit()
{
	TextureAsset::Register(U"Windmill", U"🦖"_emoji);
}

void PlayerUpdate()
{
}

void PlayerDraw()
{
	TextureAsset(U"Windmill").mirrored(pLeft).drawAt(0, 300, { 1.0f,1.0f,1.0f,1.0f });
}

void PlayerFinalize()
{
}
