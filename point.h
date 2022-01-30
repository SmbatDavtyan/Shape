#ifndef POINT_H
#define POINT_H

#include <cmath>

struct point_2d
{
	float x_coord = 0.f;
	float y_coord = 0.f;

	bool operator==(const point_2d& p2) const
	{
		return x_coord == p2.x_coord && y_coord == p2.y_coord;
	}

	bool operator!=(const point_2d& p2) const
	{
		return !(*this == p2);
	}

	static float sqr(float f)
	{
		return f * f;
	}

	static float dist(const point_2d& p1, 
				      const point_2d p2)
	{
		return std::sqrt(sqr(p2.x_coord - p1.x_coord)
			+ sqr(p2.y_coord - p1.y_coord));
	}
};

#endif