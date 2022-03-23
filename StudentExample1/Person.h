#pragma once


class Person
{
protected:
	char name[256];
	char address[512];
	int gender; //0 for female 1 for male
	bool susspended; //0 for susspeded and 1 for not susspended
	
public:
	Person(void);
	Person(char*, char*, int);
	~Person(void);

	void setName(char*);
	char* getName(void);

	void setAddress(char*);
	char* getAddress(void);

	void setMale();
	void setFemale();
	bool isMale();
	bool isFemale();

	void susspend();
	void unsusspend();
	bool isSusspended();
};
