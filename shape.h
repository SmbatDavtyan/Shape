#ifndef SHAPE_H
#define SHAPE_H

class shape
{
protected:
	double perimeter;
	double area;

	const static double PI;

public:
	shape();
	
	inline double get_perimeter() const { return perimeter; }
	inline double get_area() const { return area; }

	virtual void calculate_area()  = 0;
	virtual void calculate_perimeter()  = 0;

	virtual const char* get_name() const { return "shape"; }

	bool operator==(const shape& sh) const;
	const shape& operator=(const shape& sh);
};

#endif