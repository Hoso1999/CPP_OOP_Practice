#include "Circle.hpp"

Circle::Circle(double r)
	: r(r)
{}

Circle::~Circle()
{}

double Circle::diameter()
{
	return 2 * r;
}

double Circle::radius()
{
	return r;
}
double Circle::circumference()
{
	return 2 * M_PI * r;
}

double Circle::area()
{
	return M_PI * r * r;
}

void Circle::print(void)
{
    std::cout << "type: circle" << std::endl;
    std::cout << "radius: " << this->r;
    std::cout << "area: " << this->area() << std::endl;
    std::cout << "diameter: " << this->diameter() << std::endl;
    std::cout << "circumference: " << this->circumference() << std::endl;
}