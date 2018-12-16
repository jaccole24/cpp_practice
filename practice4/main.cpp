// Practicing C++ following Sam's "Teach Yourself C++ in 21 Days"
// Jacob Cole
// 15 December 2018

#include <iostream>
typedef unsigned short int uint16;

int main()	{
	using namespace std;
	uint16 myAge;
	uint16 * pAge = 0;

	myAge = 23;
	cout << "myAge: " << myAge << endl;
	pAge = &myAge;
	cout << "*pAge: " << *pAge << endl << endl;
}
