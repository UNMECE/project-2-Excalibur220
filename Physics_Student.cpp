#include "Physics_Student.h"

Physics_Student::Physics_Student() : Student()
{
    concentration = "Biophysics";
}

Physics_Student::~Physics_Student()
{
}

void Physics_Student::setConcentration(std::string new_concentration)
{
    concentration = new_concentration;
}

std::string Physics_Student::getConcentration() const
{
    return concentration;
}