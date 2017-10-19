class Student: public Child
{
private:
    string FirstName, LastName;
public:
    Student(string FN, string LN);
    void set(string FN, string LN);
    void get();
};
