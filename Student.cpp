#include <iostream>
#include <vector>
#include "Student.hpp"

Student::Student() {}

Student::Student(std::string first, std::string last, int id, float avg)
    :   m_first(first),
        m_last(last),
        m_id(id),
        m_avg(avg)
{
}

std::string Student::getFirst() const
{
    return m_first;
}

std::string Student::getLast() const
{
    return m_last;
}

float Student::getAvg() const
{
    return m_avg;
}

int Student::getId() const
{
    return m_id;
}

void Student::print() const 
{
    std::cout << getFirst() << " " << getLast() << " asd " << std::endl;
}

