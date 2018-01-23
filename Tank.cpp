
#include "ui\WinCanvas.h"
#include "Tank.h"
#include "Bullet.h"


float y ;
float x ;


Tank::Tank()
{ 
	position = POINT2(0, 350);
	
	positiontemp = position;
	
	velocity = POINT2(0, 0);
//	bulletposi = POINT2(4, 4);

	gunposition = POINT2(40, 330);
	gunpositionb = POINT2(0, 0);
	gunpositionc = POINT2(40, 330);
	bulletIndex = 0;
	gunvelocity = POINT2(0,0);
	
	
	
}

Tank::~Tank()
{
}




void Tank::render(WinCanvas & wc) {
	wc.DrawPoly(Rect(position + POINT2(0, 0), position + POINT2(80, -20)), LRGB(255, 255, 0));
	//wc.DrawPoly(Rect(gunpositiona + POINT2(0, 0) , gunpositionb +  POINT2(45, -15) ), LRGB(255, 255, 0));
	wc.DrawPoly(Triangle(gunpositiona, gunpositionb , gunpositionc ), LRGB(255, 255, 0));
	
}
void Tank::handleInput(InputState & is) {
	
	if (is.isActive('D')) {
	
			velocity = POINT2(0.5*60.0f, 0 * 60.0f);
			if (position.x<=0) {

				position.x = 0;
		}
		
	}



	if (is.isActive('A')) {
		

			velocity = POINT2(-0.5*60.0f, 0 * 60.0f);
			
			if (position.x >= 500) {

				position.x = 500;
			}
		
	}

	if (is.isActive('W')) {
	
		//if (gunpositionb.y>=300) {
			gunvelocity = gunvelocity+ POINT2(-0.3*60.0f, -0.6*60.0f);
			//gunvelocity = gunvelocity + gunpositionb;
		//}
			
			is.ClearKeyState('W');

		

	}
	if (is.isActive('S')) {

	//	if(gunpositionb.y<=315){

			gunvelocity =  gunvelocity + POINT2(0.3*60.0f, 0.6*60.0f);
			//gunvelocity = gunvelocity + gunpositionb;
		

	is.ClearKeyState('S');
	
	}



	if (is.isActive('M')) {
		fire = true;
		bulletContain = gunpositionb;
	
		is.ClearKeyState('M');
	}


}
void Tank::update(float dt) {
	
	
	
	if (position.x <= 500 && position.x >= 0) {
		velocity = velocity*dt;
		position = position + velocity; 

		gunposition = position + velocity +POINT2(40,-20);


	
		
	}
	
	
	

//	gunvelocity = gunvelocity*dt;

	//gunpositionb = gunvelocity + gunpositionb;
	gunpositionb = gunvelocity+gunposition + POINT2(45, -15);
	
	gunpositiona = gunposition;	

	gunpositionc = gunposition +POINT2(0, -10);
	
	



}
