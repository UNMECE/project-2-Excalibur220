#include <iostream>
#include <fstream>
#include <vector>
#include "Art_Student.h"
#include "Physics_Student.h"

int main()
{
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    for (int i = 0; i < 5; i++)
    {
        art_students.push_back(new Art_Student);
    }

    for (int i = 0; i < 5; i++)
    {
        physics_students.push_back(new Physics_Student);
    }

    art_students[0]->setName("Alice", "Smith");
    art_students[0]->setGPA(3.8);
    art_students[0]->setGraduationYear(2026);
    art_students[0]->setGraduationSemester("Spring");
    art_students[0]->setEnrolledYear(2022);
    art_students[0]->setEnrolledSemester("Fall");
    art_students[0]->setStudentLevel("Undergrad");
    art_students[0]->setArtEmphasis("Art Studio");

    art_students[1]->setName("Brian", "Johnson");
    art_students[1]->setGPA(3.5);
    art_students[1]->setGraduationYear(2025);
    art_students[1]->setGraduationSemester("Fall");
    art_students[1]->setEnrolledYear(2021);
    art_students[1]->setEnrolledSemester("Fall");
    art_students[1]->setStudentLevel("Undergrad");
    art_students[1]->setArtEmphasis("Art History");

    art_students[2]->setName("Cathy", "Lee");
    art_students[2]->setGPA(3.9);
    art_students[2]->setGraduationYear(2027);
    art_students[2]->setGraduationSemester("Spring");
    art_students[2]->setEnrolledYear(2023);
    art_students[2]->setEnrolledSemester("Spring");
    art_students[2]->setStudentLevel("Undergrad");
    art_students[2]->setArtEmphasis("Art Education");

    art_students[3]->setName("David", "Brown");
    art_students[3]->setGPA(3.2);
    art_students[3]->setGraduationYear(2026);
    art_students[3]->setGraduationSemester("Fall");
    art_students[3]->setEnrolledYear(2022);
    art_students[3]->setEnrolledSemester("Spring");
    art_students[3]->setStudentLevel("Grad");
    art_students[3]->setArtEmphasis("Art Studio");

    art_students[4]->setName("Emma", "Davis");
    art_students[4]->setGPA(3.7);
    art_students[4]->setGraduationYear(2025);
    art_students[4]->setGraduationSemester("Spring");
    art_students[4]->setEnrolledYear(2021);
    art_students[4]->setEnrolledSemester("Fall");
    art_students[4]->setStudentLevel("Grad");
    art_students[4]->setArtEmphasis("Art History");

    physics_students[0]->setName("Frank", "Miller");
    physics_students[0]->setGPA(3.6);
    physics_students[0]->setGraduationYear(2026);
    physics_students[0]->setGraduationSemester("Spring");
    physics_students[0]->setEnrolledYear(2022);
    physics_students[0]->setEnrolledSemester("Fall");
    physics_students[0]->setStudentLevel("Undergrad");
    physics_students[0]->setConcentration("Biophysics");

    physics_students[1]->setName("Grace", "Wilson");
    physics_students[1]->setGPA(3.4);
    physics_students[1]->setGraduationYear(2025);
    physics_students[1]->setGraduationSemester("Fall");
    physics_students[1]->setEnrolledYear(2021);
    physics_students[1]->setEnrolledSemester("Spring");
    physics_students[1]->setStudentLevel("Undergrad");
    physics_students[1]->setConcentration("Earth and Planetary Sciences");

    physics_students[2]->setName("Henry", "Moore");
    physics_students[2]->setGPA(3.9);
    physics_students[2]->setGraduationYear(2027);
    physics_students[2]->setGraduationSemester("Spring");
    physics_students[2]->setEnrolledYear(2023);
    physics_students[2]->setEnrolledSemester("Fall");
    physics_students[2]->setStudentLevel("Grad");
    physics_students[2]->setConcentration("Biophysics");

    physics_students[3]->setName("Ivy", "Taylor");
    physics_students[3]->setGPA(3.3);
    physics_students[3]->setGraduationYear(2026);
    physics_students[3]->setGraduationSemester("Fall");
    physics_students[3]->setEnrolledYear(2022);
    physics_students[3]->setEnrolledSemester("Spring");
    physics_students[3]->setStudentLevel("Undergrad");
    physics_students[3]->setConcentration("Earth and Planetary Sciences");

    physics_students[4]->setName("Jack", "Anderson");
    physics_students[4]->setGPA(3.85);
    physics_students[4]->setGraduationYear(2025);
    physics_students[4]->setGraduationSemester("Spring");
    physics_students[4]->setEnrolledYear(2021);
    physics_students[4]->setEnrolledSemester("Fall");
    physics_students[4]->setStudentLevel("Grad");
    physics_students[4]->setConcentration("Biophysics");

    std::ofstream outfile("student_info.dat");

    if (!outfile)
    {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }

    outfile << "ART STUDENTS" << std::endl;
    outfile << "------------" << std::endl;

    for (int i = 0; i < art_students.size(); i++)
    {
        outfile << "Student " << i + 1 << std::endl;
        outfile << "Name: " << art_students[i]->getFirstName() << " " << art_students[i]->getLastName() << std::endl;
        outfile << "GPA: " << art_students[i]->getGPA() << std::endl;
        outfile << "Graduation Year: " << art_students[i]->getGraduationYear() << std::endl;
        outfile << "Graduation Semester: " << art_students[i]->getGraduationSemester() << std::endl;
        outfile << "Enrolled Year: " << art_students[i]->getEnrolledYear() << std::endl;
        outfile << "Enrolled Semester: " << art_students[i]->getEnrolledSemester() << std::endl;
        outfile << "Level: " << art_students[i]->getStudentLevel() << std::endl;
        outfile << "Art Emphasis: " << art_students[i]->getArtEmphasis() << std::endl;
        outfile << std::endl;
    }

    outfile << "PHYSICS STUDENTS" << std::endl;
    outfile << "----------------" << std::endl;

    for (int i = 0; i < physics_students.size(); i++)
    {
        outfile << "Student " << i + 1 << std::endl;
        outfile << "Name: " << physics_students[i]->getFirstName() << " " << physics_students[i]->getLastName() << std::endl;
        outfile << "GPA: " << physics_students[i]->getGPA() << std::endl;
        outfile << "Graduation Year: " << physics_students[i]->getGraduationYear() << std::endl;
        outfile << "Graduation Semester: " << physics_students[i]->getGraduationSemester() << std::endl;
        outfile << "Enrolled Year: " << physics_students[i]->getEnrolledYear() << std::endl;
        outfile << "Enrolled Semester: " << physics_students[i]->getEnrolledSemester() << std::endl;
        outfile << "Level: " << physics_students[i]->getStudentLevel() << std::endl;
        outfile << "Concentration: " << physics_students[i]->getConcentration() << std::endl;
        outfile << std::endl;
    }

    outfile.close();

    for (int i = 0; i < art_students.size(); i++)
    {
        delete art_students[i];
    }

    for (int i = 0; i < physics_students.size(); i++)
    {
        delete physics_students[i];
    }

    std::cout << "Student information written to student_info.dat" << std::endl;

    return 0;
}