#include "student.h"

using namespace std;

// nhap du lieu vao file
void Student::addStudent(ofstream &Fileout)
{
    Fileout.open("List_student.txt", ios::app);
    cout << "student name:";
    cin >> student_name_;
    Fileout << student_name_ << ":";
    cout << "student code:";
    cin >> student_code_;
    Fileout << student_code_ << ":";
    cout << "student score:";
    cin >> student_score_;
    Fileout << student_score_ << endl;
    Fileout.close();
    //student_list_.push_back(Student);
}

// xuat danh sach ra khoi file
void Student::Show(ifstream &Filein)
{
    cout << "Name\t\t\t\t" << "ID\t\t\t\t" << "score" << endl;
    Filein.open("List_student.txt", ios::binary);
    int i = 1;
    while (!Filein.eof())
    {
        getline(Filein, student_name_, ':');
        getline(Filein, student_code_, ':');
        //Filein.ignore(); // bo ':'
        Filein >> student_score_  ;
        cout << student_name_ << "\t\t\t\t" << student_code_ << "\t\t\t\t" << student_score_ ;
    }
    Filein.close();
}
