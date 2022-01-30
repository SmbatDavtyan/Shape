#include <iostream>
#include <iomanip>

#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

int main()
{
	point_2d coords[4]
	{
		point_2d{1.f, 5.f},
		point_2d{5.f, 10.f},
		point_2d{6.f, 15.f},
		point_2d{6.f, 20.f}
	};

	shape * shapes[3];

	shapes[0] = new rectangle(coords);
	shapes[1] = new triangle(coords);
	shapes[2] = new circle(*coords, 3);

	for (int i = 0; i < 3; ++i)
	{
		shapes[i]->calculate_area();
		shapes[i]->calculate_perimeter();

		std::cout << std::setw(15) << shapes[i]->get_name() << ": area      = " <<  std::setw(15) << shapes[i]->get_area() << '\n';
		std::cout << std::setw(15) << shapes[i]->get_name() << ": perimeter = " << std::setw(15) << shapes[i]->get_perimeter() << "\n\n";
	}

	for (int i = 0; i < 3; ++i)
	{
		delete shapes[i];
	}

	return 0;
}