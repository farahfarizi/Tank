#pragma once
#include <chrono>
class FrameTimer
{
public:
	float Mark();
	FrameTimer();
	~FrameTimer();
	
private:
	std::chrono::steady_clock::time_point last;
	
};

