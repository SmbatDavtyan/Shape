#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"
#include "point.h"

class triangle : public shape
{
private:
	point_2d vertices[3];

public:
	triangle();
	triangle(const point_2d* new_coords);

	virtual void calculate_area();
	virtual void calculate_perimeter();

	virtual const char* get_name() const { return "triangle"; }

	bool operator==(const triangle& rect);
	const triangle& operator=(const triangle& rect);
	void move_to(const point_2d* new_coords);
};

#endif