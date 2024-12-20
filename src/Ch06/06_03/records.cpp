#include "records.h"
#include <iostream>
#include <fstream>

Student::Student(int the_id, std::string the_name){
    id = the_id;
    name = the_name;
}
int Student::get_id() const{
    return id;
}
std::string Student::get_name() const{
    return name;
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    id = the_id;
    name = the_name;
    credits = the_credits;
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


Grade::Grade(int sid, int cid, char grd){
    student_id = sid;
    course_id = cid;
    grade = grd;
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

void StudentRecords::add_student(int sid, std::string sname){
    students.push_back(Student(sid, sname));
}

void StudentRecords::add_course(int cid, std::string cname, unsigned char ccredits){
    courses.push_back(Course(cid, cname, ccredits));
}

void StudentRecords::add_grade(int sid, int cid, char grade){
    grades.push_back(Grade(sid, cid, grade));
}

float StudentRecords::get_num_grade(char letter) const{
    float num_grd;          // float for the numeric grade
    switch (letter){
        case 'A': num_grd = 4.0f;
            break;
        case 'B': num_grd = 3.0f;
            break;
        case 'C': num_grd = 2.0f;
            break;
        case 'D': num_grd = 1.0f;
            break;
        default:  num_grd = 0.0f;
            break;
    };
    return num_grd;
}

std::string StudentRecords::get_student_name(int sid) const{
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid)
        i++;
    return students[i].get_name();
}

unsigned char StudentRecords::get_course_credits(int cid) const{
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_credits();
}

float StudentRecords::get_GPA(int sid) const{
    float points = 0.0f, credits = 0.0f;
    for (const Grade& grd : grades)
        if (grd.get_student_id() == sid){
            // calculate total credits and points
            unsigned char current_credits = get_course_credits(grd.get_course_id());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    return (points / credits);
}

std::string StudentRecords::get_course_name(int cid) const{
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_name();
}

void StudentRecords::report_card(int sid){
    float points = 0.0f, credits = 0.0f;
    std::cout << std::endl << "Report Card for " << get_student_name(sid) << std::endl;
    for (Grade& grd : grades)
        if (grd.get_student_id() == sid){
            std::cout << get_course_name(grd.get_course_id()) << ": " << grd.get_grade() << std::endl;
            unsigned char current_credits = get_course_credits(grd.get_course_id());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    std::cout << "GPA: " << (points / credits) << std::endl;
}

//Read student name, grades, courses
//Write report card to report.txt (need to create?)


//merge this w/ the above..
    std::ifstream inFileStudents;
    std::string student_name;
    int student_id;

    inFileStudents.open("students.txt");

    std::ifstream inFileCourses;
    std::string course_name;
    int course_id;
    int course_credits;

    inFileCourses.open("courses.txt");

    std::ifstream inFileGrades;
    std::string ;
    int student_id_Grades;
    int course_id_Grades; //Maybe sure this doesn't cause confusion w/ elsewhere!
    char grade;

    inFileGrades.open("grades.txt");


    if (inFileStudents.fail())
        std::cout << std::endl << "Students file not found!" << std::endl;
    if (inFileCourses.fail())
        std::cout << std::endl << "Courses file not found!" << std::endl;
    if (inFileGrades.fail())
        std::cout << std::endl << "Grades file not found!" << std::endl;
    else{
        while (!inFileStudents.eof()){
            getline(inFileStudents, student_name);
            getline(inFileStudents, student_id);
            student_id = stoi(str);
            //Here (in this part of the loop) get their grades etc, do rest of report card stuff. maybe append to report card..

            // ...  <- while loop for courses and grades(?) Maybe go through grades, if student IDs match then take course ID, go through courses to get weightings


        }
        inFileStudents.close();
        inFileCourses.close();
        inFileGrades.close();
    }