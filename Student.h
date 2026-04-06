#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
protected:
    std::string first_name;
    std::string last_name;
    double gpa;
    int graduation_year;
    std::string graduation_semester;
    int enrolled_year;
    std::string enrolled_semester;
    std::string student_level;

public:
    Student();
    virtual ~Student();

    void setName(std::string first, std::string last);
    void setGPA(double new_gpa);
    void setGraduationYear(int year);
    void setGraduationSemester(std::string semester);
    void setEnrolledYear(int year);
    void setEnrolledSemester(std::string semester);
    void setStudentLevel(std::string level);

    std::string getFirstName() const;
    std::string getLastName() const;
    double getGPA() const;
    int getGraduationYear() const;
    std::string getGraduationSemester() const;
    int getEnrolledYear() const;
    std::string getEnrolledSemester() const;
    std::string getStudentLevel() const;
};

#endif