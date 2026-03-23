#include<iostream>
using namespace std;

class InvalidMarks
{
public:
    void message()
    {
        cout << "Marks cannot be negative\n";
    }
};

class Student
{
    int marks;

public:
    void setMarks(int m)
    {
        if(m < 0)
            throw InvalidMarks();
        marks = m;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setMarks(-10);
    }
    catch(InvalidMarks e)
    {
        e.message();
    }

    return 0;
}