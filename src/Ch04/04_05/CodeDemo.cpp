// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    std::vector<GradeScore> gradesScore = {GradeScore('A',4),
                                           GradeScore('B',3),
                                           GradeScore('C',2),
                                           GradeScore('D',1),
                                           GradeScore('F',0)};

    for (auto x : students)
        if (id == x.get_id())
            student_str = x.get_name();

    for (auto y : grades[id-1])
        for (auto z: y.size())
            course = z.get_name();
            grade = z.get_grade();

            for (auto a : Courses)
                if (course == a.get_name();
                    courseCredits = a.get_credits();

            for (auto b : gradeScore)
                if (grade == b.get_grade();
                    grade = b.get_score();        

            value_thisCourse = courseCredits*grade;
            GPA += value_thisCourse;
    GPA /= grades[id-1].size();

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
