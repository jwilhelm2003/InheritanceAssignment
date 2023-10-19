#ifndef OFFERED_COURSEH
#define OFFERED_COURSEH

#include "Course.h"

class OfferedCourse : public Course {
	// TODO: Declare private data members
    string instructorName;
    string location;
    string classTime;

	// TODO: Declare mutator functions -
	//      SetInstructorName(), SetLocation(), SetClassTime()
void SetInstructorName();
void SetLocation();
void SetClassTime();

	// TODO: Declare accessor functions -
	//      GetInstructorName(), GetLocation(), GetClassTime()
string GetInstructorName();
string GetLocation();
string GetClassTime();

};

#endif