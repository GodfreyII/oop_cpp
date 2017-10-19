#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }

    void func() { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }

    void func() { cout << "Function func() of class Child\n"; }
};
class Student: public Child
{
private:
string firstname, lastname;
public:
void set(string FN, string LN)
{
firstname=FN;
lastname=LN;
}
void get()
{
cout<<firstname<<" "<<lastname<<endl;
}
};
int main(int argc, char *argv[])
{
    Student FirstStudent(Karl, Stepanov);
    FirstStudent.get();
    
    cout << "* Create Object base" << endl;
    Base base;

    cout << "* Create Object child" << endl;
    Child child;

    cout << "* Call method func() for object base" << endl;
    base.func();

    cout << "* Call method func() for object child" << endl;
    child.func();

    return 0;
}
