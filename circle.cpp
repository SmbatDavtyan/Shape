#include "circle.h"

circle::circle()
	: shape(), radius(0.f)
{

}

circle::circle(const point_2d& new_coord, float new_radius)
	: shape()
{
	set_radius(new_radius);
	move_to(new_coord);
}

void circle::set_radius(double new_radius)
{
	radius = new_radius;
}

void circle::calculate_area()
{
	area = PI * point_2d::sqr(radius);
}

void circle::calculate_perimeter()
{
	perimeter = 2 * PI * radius;
}

bool circle::operator==(const circle& circ)
{
	if (center != circ.center || radius != circ.radius)
	{
		return false;
	}

	return shape::operator==(circ);
}

const circle& circle::operator=(const circle& circ)
{
	center = circ.center;
	radius = circ.radius;

	shape::operator=(circ);

	return *this;
}

void circle::move_to(const point_2d& new_coord)
{
	center = new_coord;
}
