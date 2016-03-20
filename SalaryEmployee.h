#include "Employee.h"
#pragma once
class SalaryEmployee :
	public Employee
{
public:
	void setSalary(float);

	SalaryEmployee();
	~SalaryEmployee();
};

