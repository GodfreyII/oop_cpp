#include<iostream>
#include<Student.h>
using namespace std;
    Student::Student(string FN, string LN)
    {
        set(FN, LN);
    }
    void Student::set(string FN, string LN)
    {
        FirstName=FN;
        LastName=LN;
    }
    void Student::get()
    {
        cout<<FirstName<<" "<<LastName<<endl;
    }
