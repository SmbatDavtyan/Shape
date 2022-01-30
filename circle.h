#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"
#include "point.h"

class circle : public shape
{
private:
	point_2d center;
	double radius;

public:

	circle();
	circle(const point_2d & new_coord, float new_radius);

	void set_radius(double new_radius);
	inline float get_radius() const { return radius; }


	virtual void calculate_area() ;
	virtual void calculate_perimeter();

	virtual const char* get_name() const { return "circle"; }

	bool operator==(const circle& circ);
	const circle& operator=(const circle& circ);
	void move_to(const point_2d & new_coord);
};

#endif