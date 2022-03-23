#include "Lecturer.h"

Lecturer::Lecturer(void)
{
	pay = true;
	susspended = false;
}

Lecturer::~Lecturer(void)
{
}

void Lecturer::susspend() 
{
	//Call the parents susspend then do
	//some stuff of our own
	Person::susspend();
	pay = false;
}

void Lecturer::unsusspend()
{
	Person::susspend();
	pay = true;
}

/*Methods for setting up the association with group */
void Lecturer::setGroup(Group* grp)
{
	group = grp;
}

Group* Lecturer::getGroup(void)
{
	return group;
}