#pragma once
#pragma once
#include "physics\frame.h"

class Tank
{
private:

	
	POINT2 positiontemp;
	

	POINT2 position;
	POINT2 velocity;

	POINT2 gunposition;
	POINT2 gunpositiona;
	POINT2 gunpositionb;
	POINT2 gunpositionc;
	POINT2 gunvelocity;
	bool move;
	
	int bulletIndex;


	math::affine::FRAME local;
public:
	Tank();
	~Tank();

	bool fire = false;
	
	POINT2 bulletContain;
	void render(WinCanvas & wc);
	void handleInput(InputState & is);
	void update(float dt);

};
