#ifndef Student_h
#define Student_h

class Student: public Child
{
private:
    string FirstName, LastName;
public:
    Student(string FN, string LN);
    void set(string FN, string LN);
    void get();
};
#endif Student_h
