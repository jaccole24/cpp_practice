#include <iostream>

class Point {
	int itsX;
	int itsY;
public:
	void SetX(int X) { itsX = X; }
	void SetY(int Y) { itsY = Y; }
	int GetX() const { return itsX; }
	int GetY() const { return itsY; }
};

class Rectangle {
	Point itsUpperLeft;
	Point itsUpperRight;
	Point itsLowerLeft;
	Point itsLowerRight;
	int itsTop;
	int itsLeft;
	int itsBottom;
	int itsRight;
public:
	Rectangle(int top, int left, int bottom, int right); // Rectangle class constructor
	~Rectangle() {} // destructor

	int GetTop() const { return itsTop; }
	int GetLeft() const { return itsLeft; }
	int GetBottom() const { return itsBottom; }
	int GetRight() const { return itsRight; }

	Point GetUpperLeft() const { return itsUpperLeft; }
	Point GetLowerLeft() const { return itsLowerLeft; }
	Point GetUpperRight() const { return itsUpperRight; }
	Point GetLowerRight() const { return itsLowerRight; }

	int SetTop(int top) { itsTop = top; }
	int SetLeft(int left) { itsLeft = left; }
	int SetBottom(int bottom) { itsBottom = bottom; }
	int SetRight(int right) { itsRight = right; }

	Point SetUpperLeft(Point Location) { itsUpperLeft = Location; }
	Point SetLowerLeft(Point Location) { itsLowerLeft = Location; }
	Point SetUpperRight(Point Location) { itsUpperRight = Location; }
	Point SetLowerRight(Point Location) { itsLowerRight = Location; }

	int GetArea() const;
	
};