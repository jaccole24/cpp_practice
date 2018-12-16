#include "Employee.h"
#include <stdlib.h>



Employee::Employee(int age, int years, int salary) {
	itsAge = age;
	itsYearsOfService = years;
	itsSalary = salary;
}

int main() {
	system("clear");
	using namespace std;

	Employee Nichole(29, 3, 45000);
	Employee Bob(45, 20, 89000);
	Employee Michelle(32, 7, 102000);

	cout << "Employee\t Age\t Years of Service\t Salary\n";
	cout << "Nichole\t\t  " << Nichole.getAge() << "\t\t        " << Nichole.getYearsOfService() << "\t $ " << Nichole.getSalary() << endl;
	cout << "Bob\t\t  " << Bob.getAge() << "\t\t       " << Bob.getYearsOfService() << "\t $ " << Bob.getSalary() << endl;
	cout << "Michelle\t  " << Michelle.getAge() << "\t\t        " << Michelle.getYearsOfService() << "\t $" << Michelle.getSalary() << endl;
	
	return 0;
}

