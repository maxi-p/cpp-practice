#include <iostream>
#include <vector>
#include "Course.hpp"


Course::Course(const std::string& name)
    : m_name(name)
{
}

void Course::addStudent(const Student& student)
{
    m_students.push_back(student);
}

const std::vector<Student> Course::getStudents() const {
    return m_students;
}

void Course::print() const {
    for(const Student& s : m_students ){
        s.print();
    }
}
