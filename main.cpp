#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};
 
class Student: Base
{
 string  name;
 string last name;
};

int main(int argc, char *argv[])
{
    cout << "* Create Object base" << endl;
    Base base;

    return 0;
}
