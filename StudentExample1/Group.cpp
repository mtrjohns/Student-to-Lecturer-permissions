#include "Group.h"
#include "Student.h"
#include "Lecturer.h"

Group::Group(void)
{
	//initalise the student count
	studentCount =0;
}

Group::~Group(void)
{
	int i;
	//Go though the list of students and 
	//delete them (these may be annonymous classes
	for(i=0; i<studentCount; i++)
	{
		//This should test for a zero or negative
		//pointer which would inicate the memory 
		//is not allocated (DODGY)
		if(students[i])
		{
			delete(students[i]);
		}
	}
}

void Group::setLecturer(Lecturer* lec)
{
	lecturer = lec;
}

Lecturer* Group::getLecturer(void)
{
	return lecturer;
}

void Group::addStudent(Student* student)
{
	/* Check the status of the array before 
	adding */
	if(studentCount < MAX_STUDENTS)
	{
		//add student
		students[studentCount] = student;
		//increment counter
		studentCount++;
		//set this as the students group
		student->setGroup(this);
	}
}

