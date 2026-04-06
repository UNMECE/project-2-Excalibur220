#include "Student.h"

Student::Student()
{
    first_name = "Unknown";
    last_name = "Unknown";
    gpa = 0.0;
    graduation_year = 0;
    graduation_semester = "Unknown";
    enrolled_year = 0;
    enrolled_semester = "Unknown";
    student_level = "Undergrad";
}

Student::~Student()
{
}

void Student::setName(std::string first, std::string last)
{
    first_name = first;
    last_name = last;
}

void Student::setGPA(double new_gpa)
{
    gpa = new_gpa;
}

void Student::setGraduationYear(int year)
{
    graduation_year = year;
}

void Student::setGraduationSemester(std::string semester)
{
    graduation_semester = semester;
}

void Student::setEnrolledYear(int year)
{
    enrolled_year = year;
}

void Student::setEnrolledSemester(std::string semester)
{
    enrolled_semester = semester;
}

void Student::setStudentLevel(std::string level)
{
    student_level = level;
}

std::string Student::getFirstName() const
{
    return first_name;
}

std::string Student::getLastName() const
{
    return last_name;
}

double Student::getGPA() const
{
    return gpa;
}

int Student::getGraduationYear() const
{
    return graduation_year;
}

std::string Student::getGraduationSemester() const
{
    return graduation_semester;
}

int Student::getEnrolledYear() const
{
    return enrolled_year;
}

std::string Student::getEnrolledSemester() const
{
    return enrolled_semester;
}

std::string Student::getStudentLevel() const
{
    return student_level;
}