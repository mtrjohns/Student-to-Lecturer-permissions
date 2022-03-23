#pragma once
/*Forward declerations have to be used here 
This is to avoid cyclic dependencies i.e. Student inlcudes 
Group which includes Student which includes Group and so on.*/ 
class Student;
class Lecturer;

class Group
{
	/*A simple one to one association like student/lecturer 
	and group*/
	Lecturer* lecturer;
	/*A bit more complex we need to relate many students to the
	group and so we maintain and array.  This requries a maximum
	and a count so we know if the array is full and the next 
	avalible space*/
	static const int MAX_STUDENTS=10;
	Student* students[MAX_STUDENTS];
	int studentCount;

public:
	Group(void);
	~Group(void);

	void setLecturer(Lecturer*);
	Lecturer* getLecturer(void);

	/*Note this is an add rather than a set
	we add the student to the array*/
	void addStudent(Student*);
	/*Could return the array pointer but it makes more sense
	to get the ith student. Seaches can then return the index
	of a student and be used in conjunction with this method*/
	Student* getStudent(int i);

};
