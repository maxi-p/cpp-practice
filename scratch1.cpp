#include <iostream>
#include <vector>
#include "Student.hpp"
#include "Course.hpp"

int main(int argc, char * argv[]){
    Student s1;
    Student s2("Max","Petrushin", 123456789, 99.9);
    const Student s3("Dave","Churchill", 1, 3.14);

    // s1.print();
    // s2.print();
    // s3.print();

    Course comp4300("COMP4300");
    comp4300.addStudent(s1);
    comp4300.addStudent(s2);
    comp4300.addStudent(s3);

    comp4300.print();

    std::cout << "success++" << std::endl;

    return 0;
}
