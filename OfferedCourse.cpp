#include "OfferedCourse.h"

// TODO: Define mutator functions -
//      SetInstructorName(), SetLocation(), SetClassTime()
void SetInstructorName(string name){
instructorName = name;
}
void SetLocation(string x){
location = x;
}
void SetClassTime(string time){
classTime = time;
}
// TODO: Define accessor functions -
//      GetInstructorName(), GetLocation(), GetClassTime()
string GetInstructorName(){
    return instructorName;
}
string GetLocation(){
    return location;
}
string GetClassTime(){
    return classTime;
}