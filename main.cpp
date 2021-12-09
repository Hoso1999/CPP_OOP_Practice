#include <iostream>
#include "Triangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"
#include "QuestionGenerator.hpp"


int main()
{
	std::cout << "root: " << "\u221A" << std::endl;
	// srand(time(NULL));
	QuestionGenerator q(10);
	// std::cout << "rand: " << Rand(0.0, 3.0)  << std::endl;
	q.print();
	return 0;
}