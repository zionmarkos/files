#include <iostream>
#include "MyDataStructure.hpp"
#include "MyLibrary.hpp"
using std::cout;
using std::cin;
int main()
{
    const int STUDENT_NUM = 3;
    CS2::Student students[STUDENT_NUM];
    for (int i=0; i<STUDENT_NUM; i++)
    {
        cout<<"Enter the information of the student "<<i+1<<"below\n";
        cout<<"  ID(integer):";
        cin>>students[i].ID;
        cout<<"  Name:";
        cin.ignore();
        getline(cin,students[i].Name);
        cout<<"  year in school (integer):";
        cin>>students[i].YearInSchool;
        cout<<"  year GPA (decimal or integer):";
        cin>>students[i].OveralGPA;
    }
    double avgGPA =CS2::averageGPA(students, STUDENT_NUM);
    COUT<<"Average GPA of "<<STUDENT_NUM<<"  student is "<<avgGPA;
    return 0;
}
/*
Question 1:
Including `#include "MyLibrary.hpp"` in `MyLibrary.cpp` ensures all function declarations are available and avoids issues with function call order.

 Question 2:
No, the prototype should be in the same namespace (`CS2`) as the implementation for consistency and to avoid errors.

 Question 3:
Yes, you can move `Student` out of `CS2`, but you’ll need to update all references from `CS2::Student` to just `Student`.

 Question 4:
`cin.ignore()` clears the input buffer, preventing leftover characters (like newline) from affecting later input operations.

Question 5:
System libraries use angle brackets (`< >`), while your own libraries use double quotes (`" "`).

Question 6:
`#ifndef` and `#define` prevent multiple inclusions of the same header file, avoiding redefinition errors.

Question 7:
The variables in `#ifndef` and `#define` don’t have to match the file names but should be unique for clarity and to avoid conflicts.*/