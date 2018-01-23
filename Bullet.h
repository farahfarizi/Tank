#pragma once
#include "physics\frame.h"
#include "Tank.h"
class Bullet
{
private:

POINT2 gunposi;
POINT2 bulletposi;
POINT2 bulletvelocity;

public:
	//Bullet();
	
	Bullet();
	~Bullet();

	
	POINT2 bullettemp;
	void render(WinCanvas & wc);

	void update(float dt);
	
	//void update();
};

