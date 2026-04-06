#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"
#include <string>

class Art_Student : public Student
{
private:
    std::string art_emphasis;

public:
    Art_Student();
    ~Art_Student();

    void setArtEmphasis(std::string emphasis);
    std::string getArtEmphasis() const;
};

#endif