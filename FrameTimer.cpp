#include "FrameTimer.h"


using namespace std::chrono;

float FrameTimer::Mark()
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> frameTime = last - old;
	
	


	
	
/*	if (frameTime.count == 5.0f) {
		printf("spawn enemy");
	}
	*/
	return frameTime.count();
}

FrameTimer::FrameTimer()
{
	last = steady_clock::now();
	
	
}


FrameTimer::~FrameTimer()
{
}
