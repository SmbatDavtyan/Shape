#include "shape.h"

const double shape::PI = 3.14159;

shape::shape()
	: perimeter(0.f), area(0.f)
{}


bool shape::operator==(const shape& sh) const
{
	return (area == sh.area) && (perimeter == sh.perimeter);
}

const shape& shape::operator=(const shape& sh)
{
	area = sh.area;
	perimeter = sh.perimeter;

	return *this;
}
