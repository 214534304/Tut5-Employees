#pragma once
#include <string.h>
#include <iostream>
using namespace std;

//initialize class employee

class Employee
{
public:
	
	string getFirstName(string);
	int StaffNum(int);
	float Salary(float);
	

	//static member function 
	static int getCount;		//returns number of objects

private:
	string FirstName;
	int StaffNum;                //Private data
	float Salary;

	static int Count;	//increases as each entry is made

	Employee();
	~Employee();
}; //end of class 