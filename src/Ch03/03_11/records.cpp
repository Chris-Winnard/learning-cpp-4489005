// Write your implementation code here

#include "records.h"

Student::Student(int id_i,std::string name_i){ //Constructor
    id = id_i;
    name = name_i;
}
int Student::get_id()  const{ //Getters
    return id;
}
std::string Student::get_name() const{ //Should these all be const{ ? Maybe bc included setters don't need to be?
    return name;
}
//void Student::set_id(int new_id){ //Don't think setters are required(?) but may as well create anyway
//    id = new_id;
//}
//void Student::set_name(std::string new_name){
//    name = new_name;
//}
//^For setters, need to include them in records.h . For now just commented out.

//Similar for course and grade:

Course::Course(int id_i,std::string name_i, unsigned char credits_i){
    id = id_i;
    name = name_i;
    credits = credits_i;
}

int Course::get_id() const{
    return id;
}
std::string Course::get_name() const{
    return name;
}
int Course::get_credits() const{
    return credits;
}
//void Course::set_id(int new_id){
//    id = new_id;
//}
//void Course::set_name(std::string new_name){
//    name = new_name;
//}
//void Course::set_credits(unsigned char new_credits){
//    credits = new_credits;
//}







Grade::Grade(int student_id_i, int course_id_i, char grade_i){
    student_id = student_id_i;
    course_id = course_id_i;
    grade = grade_i;
}

int Grade::get_student_id() const{
    return student_id;
}
int Grade::get_course_id() const{
    return course_id;
}
char Grade::get_grade() const{
    return grade;
}
//void Grade::set_student_id(int new_student_id){
//    id = new_student_id;
//}
//void Grade::set_course_id(int new_course_id){
//    id = new_course_id;
//}
//void Grade::setgrade(unsigned char new_grade){
//    grade = new_grade;
//}