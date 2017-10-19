#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    void func() const { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }

    void func() const { cout << "Function func() of class Child\n"; }
};
class Student: public Child
{
private:
string FirstName, LastName;
public:
Student(string FN, string LN)
{
set(string FN, string LN);
}
void set(FN, LN)
{
FirstName=FN;
LastName=LN;
}
void get()
{
cout<<FirstName<<" "<<LastName<<endl;
}
};
void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}

int main(int argc, char *argv[])
{
    Student FirstStudent(Karl, Stepanov);
    FirstStudent.get();

    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    Function(base);

    cout << "* Call method func() for object child" << endl;
    Function(child);

    return 0;
}
