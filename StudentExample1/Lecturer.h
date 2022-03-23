#pragma once
#include "Person.h"
/*Include the group so we can use it
we could use a forward declreation here.*/
#include "Group.h"

class Lecturer : public Person
{
private:
	bool pay;
	Group *group;

public:
	Lecturer(void);
	~Lecturer(void);

	void susspend();
	void unsusspend();

	void setGroup(Group*);
	Group* getGroup(void);
};
