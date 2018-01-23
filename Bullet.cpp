
#include "ui\WinCanvas.h"
#include "Bullet.h"
#include "Tank.h"

Bullet::Bullet()
{
//	std::vector<Bullet> bulletVec; //bullet in vector so it could have more than 1 active.
	bulletvelocity = POINT2(0.8*60.0f, -0.8*60.0f);
	//bulletposi = POINT2(0, 0);
	

	
	gunposi = POINT2(0*60.0f, 0*60.0f);
	
	
}


Bullet::~Bullet()
{
}

void Bullet::render(WinCanvas & wc)
{
	bulletposi = bulletposi+bullettemp;
	
	bullettemp = POINT2(0, 0);
	wc.DrawPoly(Rect(bulletposi + POINT2(0, 0), bulletposi + POINT2(5, 5)), LRGB(255, 255, 0));
	
	//wc.DrawPoly(Circle(  bulletposi+POINT2(5,5), 2), LRGB(255, 255, 0));
}



void Bullet::update(float dt)
{
//	

	bulletposi = bulletposi + bulletvelocity*dt;

}
