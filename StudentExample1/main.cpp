#include <stdio.h>
#include "Lecturer.h"
#include "Student.h"
#include "Group.h"

int main(int argc, char** argv)
{
	/*Create a lecturer */
	Lecturer *lec = new Lecturer();
	lec->setName("Evil Pete");

	/* Create a group */
	Group *victims = new Group();

	/* Connect the group to the lecturer and the lecturer
	to the group */ 
	victims->setLecturer(lec);
	lec->setGroup(victims);

	/*Create a Student*/
	Student *s = new Student("bob","wherever",1,1000.0f);
	/*Add the student to the group 
	addStudent contains code make the link from student to group*/
	victims->addStudent(s);

	//Create student and add to group (anononymous class defnintion*/
	victims->addStudent(new Student("ralph","nowhere",1,2000.0f));

	//Create pointer to point to a student object
	//within the array of group
	Student* ptr;
	ptr = victims->getStudent(0);
	printf("%s with debt %f\n",
			ptr->getName(),
			ptr->getDebt());

	//Use the returned object directly. 
	printf("%s with debt %f\n",
		victims->getStudent(1)->getName(),
		victims->getStudent(1)->getDebt());

	/*Group class only manages students so we need to get rid 
	of the lecturer ourselvs */
	delete(lec); 
	/*Group class will destroy the associated students */ 
	delete(victims);
}