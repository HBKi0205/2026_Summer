#include "Player.h"

void Player::Init()
{
	position = { 0.0f, 0.0f, 0.0f };
}

void Player::Update()
{
	if (CheckHitKey(KEY_INPUT_RIGHT))
	{
		position.x += PLAYER_SPEED;
	}
	if (CheckHitKey(KEY_INPUT_LEFT))
	{
		position.x -= PLAYER_SPEED;
	}
	if (CheckHitKey(KEY_INPUT_UP))
	{
		position.y += PLAYER_SPEED;
	}
	if (CheckHitKey(KEY_INPUT_DOWN))
	{
		position.y -= PLAYER_SPEED;
	}
}

void Player::Draw()
{
	DrawBox(position.x - 10, position.y - 10, position.x + 10, position.y + 10, GetColor(255, 0, 0), TRUE);
}