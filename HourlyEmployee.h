#pragma once
#include "Employee.h"
class HourlyEmployee :
	public Employee
{
public:
	float setHourlyRate(float);
	int setHoursWorked(int);

	HourlyEmployee();
	~HourlyEmployee();
};

