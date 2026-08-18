#pragma once
#include "Constants.h"
#include "Player.h"
#include "Mole.h"
#include "Camera.h"
#include "Stage.h"

class Game {
public:
	void Awake();

	void Init();

	void Update();

	void Draw();

private:
	Player player;

	Mole moles[MAX_MOLE];

	Camera camera;

	Stage stage;

};