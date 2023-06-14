#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;
class Student
{
private:
    std::string student_name_;
    std::string student_code_;
    float student_score_;

public:
    void SetStudentName(std::string student_name_);
    void SetStudentCode(std::string student_code_);
    void SetStudentScore(float student_score_);
    void SetOneStudent(std::string student_name_, std::string student_code_, float student_score_);
    std::string GetStudentName();
    std::string GetStudentCode();
    float GetStudentScore();
    void Show(ifstream &); // doc du lieu tu file
    void addStudent(ofstream &); // nhap du lieu vao file
};

class StudentList
{
private:
    std::vector<Student> student_list_;

public:
    // add function readfile or writefile

    // add function add student
};

#endif