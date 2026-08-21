#pragma once
#include "DxLib.h"
#include "Constants.h"

class Player {
public:
	void Init();

	void Update();

	void Draw();

private:
	VECTOR position;

	float inputX, inputY;

};