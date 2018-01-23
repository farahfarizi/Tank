#include "Enemy.h"



Enemy::Enemy()
{
	enemyposition = POINT2(0, 0);
	enemyvelocity = POINT2(0.5*60.0f,0*60.0f);
}



Enemy::~Enemy()
{
}

void Enemy::render(WinCanvas & wc)
{
	wc.DrawPoly(Rect(enemyposition + POINT2(0, 0), enemyposition + POINT2(40, 20)), LRGB(255, 255, 0));
}


void Enemy::update(float dt)
{
	enemyposition = enemyposition + enemyvelocity*dt;

}
