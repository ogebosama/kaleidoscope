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
    Player player;
    player.x = 0.0f;
    player.y = 0.0f;
    player.speed = 5.0f;
    player.health = 100;
}

void PlayerUpdate()
{
    // プレイヤーこーしん
}

void PlayerDraw()
{
    char buffer[100];
    sprintf(buffer, "Player Position: (%.2f, %.2f)", 0.0f, 0.0f);
}

void PlayerFinalize()
{
}
