// Practicing C++ following Sam's "Teach Yourself C++ in 21 Days"
// Jacob Cole
// 15 December 2018

#include "Rectangle.h"

int main()	{
	//initialize a rectangle to 30,5
	Rectangle theRect(30,5);
	std::cout << "DrawShape():" << std::endl;
	theRect.DrawShape();
	std::cout << "DrawShape(22,5):" << std::endl;
	theRect.DrawShape(22,5);
	return 0;
}

