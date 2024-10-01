#include <iostream>
#include "Course.hpp"

void printCourse (const ComputerScience::Course& a);

using namespace std;

int main ()
{
    using ComputerScience::Course;
    string name = "Computer Science II";
    string depart = "Computer Science";
    {
       Course *cs2Ptr;
       cs2Ptr = new Course ();
       printCourse(*cs2Ptr);
       cout<<endl;
       cs2Ptr->setCourseName(name);
       cs2Ptr->setDepartment(depart);
       cs2Ptr->setCredit(4);
       printCourse(*cs2Ptr);
    }
    cout<<"\n\nEnter RRTURN key to finish the program";
    cin.get();
    return 0;
}

void printCourse(const ComputerScience::Course& a)
{
    cout<<"\""<<a.getCourseName()<<"\" of "
        <<a.getDepartment()<<"Department has "
        <<a.getCredit()<<" credits";
}