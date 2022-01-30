#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "point.h"

class rectangle : public shape
{
private:
	point_2d vertices[4];
public:
	rectangle();
	rectangle(const point_2d* new_coords);

	virtual void calculate_area();
	virtual void calculate_perimeter();

	virtual const char* get_name() const { return "rectangle"; }

	bool operator==(const rectangle& rect);
	const rectangle& operator=(const rectangle& rect);
	void move_to(const point_2d * new_coords);
};

#endif