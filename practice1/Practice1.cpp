#include "Rectangle.h"


Rectangle::Rectangle(int top, int left, int bottom, int right) {
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;

	itsUpperLeft.SetX(left);
	itsUpperLeft.SetY(top);

	itsLowerLeft.SetX(left);
	itsLowerLeft.SetY(bottom);

	itsUpperRight.SetX(right);
	itsUpperRight.SetY(top);

	itsLowerRight.SetX(right);
	itsLowerRight.SetY(bottom);
}

int Rectangle::GetArea() const {
	int Width = itsRight - itsLeft;
	int Height = itsTop - itsBottom;
	return(Width*Height);
}

int main() {
	Rectangle MyRectangle(100, 20, 50, 80);
	int Area = MyRectangle.GetArea();

	std::cout << "Area: " << Area << std::endl;
	std::cout << "Upper Left X Coordinate: ";
	std::cout << MyRectangle.GetUpperLeft().GetX() << std::endl;
	return 0;
}

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
