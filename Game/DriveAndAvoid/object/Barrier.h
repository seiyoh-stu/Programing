#pragma once

#include "../Utility/Vector2D.h"

class Barrier
{
private:
	int image;
	float life_span;

public:
	Barrier();
	~Barrier();

	void Draw(const Vector2D& location);
	bool IsFinished(float speed);
};

