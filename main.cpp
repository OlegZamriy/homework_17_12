#include "Student.h"
#include<iostream>

int main() {
    Student student;

    std::cout << "Enter student information:\n";
    student.inputStudentData();

    std::cout << "\nStudent information:\n";
    student.displayStudentData();

    return 0;
}
