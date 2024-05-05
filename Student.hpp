#include <iostream>

#ifndef STUDENT_HPP
#define STUDENT_HPP
class Student{
    std::string m_first = "First";
    std::string m_last  = "Last";
    int         m_id    = 0;
    float       m_avg   = 0;

public:
    Student();
    Student(std::string first, std::string last, int id, float avg);
    std::string getFirst() const;
    std::string getLast() const;
    float getAvg() const;
    int getId() const;
    void print() const;
};
#endif
