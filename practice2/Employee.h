#include <iostream>

class Employee {
	int itsAge;
	int itsYearsOfService;
	int itsSalary;
public:
	Employee(int age, int years, int salary);
	~Employee() {}
	int getAge() const { return itsAge; }
	int getYearsOfService() const { return itsYearsOfService; }
	int getSalary() const { return itsSalary; }
	void setAge(int age) { itsAge = age; }
	void setYearsOfService(int years) { itsYearsOfService = years; }
	void setSalary(int salary) { itsSalary = salary; }
};
