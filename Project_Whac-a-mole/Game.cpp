#include "Game.h"

void Game::Awake()
{
	for (int i = 0; i < MAX_MOLE; i++) {
		moles[i].Awake();
	}
}

void Game::Init()
{
	player.Init();
	for (int i = 0; i < MAX_MOLE; i++) {
		moles[i].Init();
	}
}

void Game::Update()
{
	player.Update();
	for (int i = 0; i < MAX_MOLE; i++) {
		moles[i].Update();
	}
}

void Game::Draw()
{
	player.Draw();
	for (int i = 0; i < MAX_MOLE; i++) {
		moles[i].Draw();
	}
}