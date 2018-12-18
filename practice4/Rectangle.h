#include <iostream>

// Rectangle class declaration (private by default)
class Rectangle {
	int itsWidth;
	int itsHeight;
public:
	Rectangle(int width, int height); // Rectangle class constructor
	~Rectangle() {} // destructor

	//overloaded class function DrawShape
	void DrawShape() const;
	void DrawShape(int aWidth, int aHeight) const;
};

// Contstructor implementation
Rectangle::Rectangle(int width, int height)
{
	itsWidth = width;
	itsHeight = height;
}

// Overloaded DrawShape takes no values
// Draws based on current class member values
void Rectangle::DrawShape() const
{
	DrawShape(itsWidth, itsHeight);
}

// Overloaded DrawShape takes two values
// Draws shape based on the parameters
void Rectangle::DrawShape(int width, int height) const
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
