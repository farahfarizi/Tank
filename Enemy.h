#pragma once
#include "ui\WinCanvas.h"
class Enemy
{
private:
	POINT2 enemyposition;
	POINT2 enemyvelocity;


public:
	Enemy();
	~Enemy();
	bool alive;


	void render(WinCanvas & wc);
	
	void update(float dt);
};

