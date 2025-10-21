/*--------------------------------------------------------------------------------
FileName	:player.h（プレイヤー制御）
Author		: Yoshihiro Kayamori
Date			: 2025/10/21 - 2025/10/21
--------------------------------------------------------------------------------*/
#include "stdafx.h"
#include "player.h"

struct Player
{
    float x;
    float y;
    float speed;
    int health;

};

void PlayerInit()
{
	std::cout << "ここでプレイヤーを確定させます." << std::endl;
    Player player;
    playerStartX = 100.0f;
	playerStartY = 300.0f;
    player.x = 0.0f;
    player.y = 0.0f;
    player.speed = 5.0f;
    player.health = 100;
}

void PlayerUpdate()
{
	std::cout << "ここでプレイヤーを変身させます." << std::endl;
}

void PlayerDraw()
{
    std::cout << "ここでプレイヤーを描画します." << std::endl;
    char buffer[100];
    sprintf(buffer, "Player Position: (%.2f, %.2f)", 0.0f, 0.0f);

}

void PlayerFinalize()
{
	std::cout << "ここでプレイヤーを倒します." << std::endl;
}
