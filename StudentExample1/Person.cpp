#include "Person.h"
#include <string.h>

Person::Person(void)
{
	susspended = false;
}

Person::~Person(void)
{
}

Person::Person(char* name, char* address, int gender)
{
	setName(name);
	setAddress(address);
	this->gender = gender;
}

void Person::susspend()
{
	susspended = true;
}

void Person::unsusspend()
{
	susspended = false;
}

bool Person::isSusspended()
{
	return susspended;
}

void Person::setName(char* name)
{
	strcpy(this->name,name);
}

char* Person::getName(void)
{
	return name;
}

void Person::setAddress(char* address)
{
	strcpy(this->address, address);
}

char* Person::getAddress(void)
{
	return address;
}

void Person::setMale()
{
	gender = 1;
}

void Person::setFemale()
{
	gender = 0;
}

bool Person::isMale()
{
	if(gender ==1) return true;
	else return false;
}

bool Person::isFemale()
{
	if(gender==0) return false;
	else return true;
}


