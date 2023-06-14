#include "student.h"

void Student::SetStudentName(std::string student_name_)
{
    this->student_name_=student_name_;
}

void Student::SetStudentCode(std::string student_code_)
{
    this->student_code_=student_code_;
}

void Student::SetStudentScore(float student_score_)
{
    this->student_score_=student_score_;
}

void Student::SetOneStudent(std::string student_name_, std::string student_code_, float student_score_)
{
    SetStudentName(student_name_);
    SetStudentCode(student_code_);
    SetStudentScore(student_score_);
}

std::string Student::GetStudentName()
{
    return student_name_;
}

std::string Student::GetStudentCode()
{
    return student_code_;
}

float Student::GetStudentScore()
{
    return student_score_;
}
