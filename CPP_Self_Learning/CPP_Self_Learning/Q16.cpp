#include<iostream>
using namespace std;

class Student
{
public:
    void display()
    {
        cout << "Student Data\n";
    }
};

class SmartPtr
{
    Student *ptr;

public:
    SmartPtr(Student *p)
    {
        ptr = p;
    }

    ~SmartPtr()
    {
        delete ptr;
    }

    Student* operator->()
    {
        return ptr;
    }
};

int main()
{
    try
    {
        SmartPtr s(new Student());
        s->display();
    }
    catch(...)
    {
        cout << "invalid input\n";
    }

    return 0;
}