#include "student.h"

using namespace std;

int main()
{
    ofstream Fileout;
    ifstream Filein;
    Student st;
    //st.add_student(Fileout);
    //st.output(Filein);
   

    int choose;
    while (true)
    {
        cout << "CHUONG TRINH QUAN LY SINH VIEN\n";
        cout << "CHUC NANG : \n";
        cout << "1. Them thong tin sinh vien.\n";
        cout << "2. Sua thong tin sinh vien.\n"; 
        cout << "3. Xoa thong tinh sinh vien.\n";
        cout << "4. Dua ra thong tin sinh vien.\n";
        cout << "0. Thoat.\n";
        cout << "Ban chon : " ; cin >> choose;

        switch (choose)
        {
        case 1:
            cout << "Them thong tin sinh vien!\n";
            
            st.addStudent(Fileout);
            student_list_.push_back(st);
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
        cout << "Danh sach sinh vien!\n";
            st.Show(Filein);
            break;
        case 0:
            return 0;
        }
    }
    
}