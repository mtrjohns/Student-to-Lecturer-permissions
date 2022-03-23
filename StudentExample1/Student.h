#pragma once
#include "Person.h"
/*Forwrad decleratinos are used here instead of 
include statements this improves compile times
*/
class Group;

/* Public inheritance from the Person class.
The 'public' part indicates that the public parts of the
parent will stay public in the child. 
*/
class Student : public Person
{
private:
	/* Student class will have all the parents attributes and these */
	float debt;
	Group* group;

public:
	Student(void);
	Student(char*, char*, int, float);
	~Student(void);

	/* Student class will have all the parents methods and these */
	void setDebt(float);
	float getDebt(void);

	void setGroup(Group*);
	Group* getGroup(void);
};
