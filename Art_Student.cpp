#include "Art_Student.h"

Art_Student::Art_Student() : Student()
{
    art_emphasis = "Art Studio";
}

Art_Student::~Art_Student()
{
}

void Art_Student::setArtEmphasis(std::string emphasis)
{
    art_emphasis = emphasis;
}

std::string Art_Student::getArtEmphasis() const
{
    return art_emphasis;
}