#include "triangle.h"
#include <cmath>

triangle::triangle()
	: shape()
{
}

triangle::triangle(const point_2d* new_coords)
{
	move_to(new_coords);
}

void triangle::calculate_area()
{
	float a_b = point_2d::dist(vertices[0], vertices[1]);
	float b_c = point_2d::dist(vertices[1], vertices[2]);
	float a_c = point_2d::dist(vertices[0], vertices[2]);

	calculate_perimeter();

	float s = perimeter / 2;

	area = std::sqrt(s * (s - a_b) * (s - b_c) * (s - a_c));
}

void triangle::calculate_perimeter()
{
	float a_b = point_2d::dist(vertices[0], vertices[1]);
	float b_c = point_2d::dist(vertices[1], vertices[2]);
	float a_c = point_2d::dist(vertices[0], vertices[2]);

	perimeter = a_b + b_c + a_c;
}

bool triangle::operator==(const triangle& tri)
{
	for (int i = 0; i < 3; ++i)
	{
		if (vertices[i] != tri.vertices[i])
		{
			return false;
		}
	}
	return shape::operator==(tri);
}

const triangle& triangle::operator=(const triangle& tri)
{
	shape::operator=(tri);

	move_to(tri.vertices);

	return *this;
}

void triangle::move_to(const point_2d* new_coords)
{
	for (int i = 0; i < 3; ++i)
	{
		vertices[i] = new_coords[i];
	}
}
