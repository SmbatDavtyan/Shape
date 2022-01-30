#include "rectangle.h"
#include "point.h"

rectangle::rectangle()
	:shape()
{
}

rectangle::rectangle(const point_2d* new_coords)
{
	move_to(new_coords);
}

void rectangle::calculate_area() 
{
	float height = point_2d::dist(vertices[0], vertices[1]),
		  width  = point_2d::dist(vertices[1], vertices[2]);

	area = height * width;
}

void rectangle::calculate_perimeter()
{
	float height = point_2d::dist(vertices[0], vertices[1]);
	float width  = point_2d::dist(vertices[1], vertices[2]);

	perimeter = 2 * height + 2 * width;
}

void rectangle::move_to(const point_2d* new_coords)
{
	for (int i = 0; i < 4; ++i)
	{
		vertices[i] = new_coords[i];
	}
}

bool rectangle::operator==(const rectangle& rect)
{
	for (int i = 0; i < 4; ++i)
	{
		if (vertices[i] != rect.vertices[i])
		{
			return false;
		}
	}
	return shape::operator==(rect);
}

const rectangle& rectangle::operator=(const rectangle& rect)
{
	shape::operator=(rect);

	move_to(rect.vertices);

	return *this;
}