#include <iostream>
#include "Employee.h"
#include "Department.h"
using namespace std;

int main() {
	Employee e1("Mostafa");
	Employee e2("Ali");

	Department* dep = new Department();
	dep->name = "CS";
	dep->deps.push_back(e1);
	dep->deps.push_back(e2);

	e1.Print();
	e2.Print();
	dep->PrintDepartment();
	e1.Print();

	return 0;
}
