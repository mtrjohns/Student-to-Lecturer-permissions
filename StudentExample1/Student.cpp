#include "Student.h"
//These are the relevent include files for the forward 
//decleration we need them here as we'll be dealing with 
//the actual classes and need complete types
#include "Group.h"

Student::Student(void)
{
}

Student::Student(char* name, char* address, int gender, float debt) 
: Person(name,address,gender)
{
	setDebt(debt);
}

Student::~Student(void)
{
}

void Student::setDebt(float debt)
{
	this->debt = debt;
}

float Student::getDebt(void)
{
	return debt;
}

void Student::setGroup(Group* grp)
{
	group = grp;
}

Group* Student::getGroup(void)
{
	return group;
}