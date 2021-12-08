#include "Square.hpp"

Square::Square(double side)
	: side(side)
{
}
double Square::area(void)
{
	return side * side;
}

double Square::perimeter(void)
{
	return 4 * side;
}

double Square::outsideRadius()
{
	return this->diagonal() / 2;
}

double Square::insideRadius(void)
{
	return side / 2;
}
double Square::diagonal(void)
{
	return sqrt(2.0) * side;
}
void Square::print(void)
{
	std::cout << "type: square" << std::endl;
	std::cout << "sides: " << side << std::endl;
	std::cout << "area: " << this->area() << std::endl;
	std::cout << "diagonal: " << this->diagonal() << std::endl;
	std::cout << "perimeter: " << this->perimeter() << std::endl;
	std::cout << "R: " << this->outsideRadius() << std::endl;
	std::cout << "r: " << this->insideRadius() << std::endl;
}

