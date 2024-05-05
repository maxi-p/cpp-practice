#include <iostream>
#include <vector>
#include "Student.hpp"

#ifndef COURSE_HPP
#define COURSE_HPP
class Course{
    std::string m_name = "Course";
    std::vector<Student> m_students;

public:
    Course();
    Course(const std::string& name);
    void addStudent(const Student& student);
    const std::vector<Student> getStudents() const;
    void print() const;
};
#endif
