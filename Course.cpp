#include "Course.h"
	// TODO: Define mutator functions - 
	//       SetCourseNumber(), SetCourseTitle()
void SetCourseNumber(string num){
courseNumber = num; 
}
void SetCourseTitle(string title){
courseTitle = title;

}

	// TODO: Define accessor functions - 
	//       GetCourseNumber(), GetCourseTitle()
string GetCourseNumber() {
    return courseNumber;
}   
string GetCourseTitle(){
    return courseTitle;
}

	// TODO: Define PrintInfo()
    void PrintInfo(){
        cout<<"Course Information:"<<endl<<"   Course Number: "<< GetCourseNumber()<<endl<<"  Course Title: "<< GetCourseTitle()<<endl;
    }