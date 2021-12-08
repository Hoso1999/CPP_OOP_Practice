#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape
{
	double r;
	public:
		Circle(double);
		~Circle();
		void	print();
		double	area();
		double	diameter();
		double	radius();
		double	circumference();

};



#endif
