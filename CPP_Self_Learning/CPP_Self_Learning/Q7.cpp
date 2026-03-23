#include<iostream>
using namespace std;

namespace college
{
    class Student
    {
        int id;
        string name;

    public:
        Student(int id, string name)
        {
            this->id = id;
            this->name = name;
        }

        void display()
        {
            cout << "Student ID: " << id << " Name: " << name << endl;
        }
    };

    class Teacher
    {
        int id;
        string name;

    public:
        Teacher(int id, string name)
        {
            this->id = id;
            this->name = name;
        }

        void display()
        {
            cout << "Teacher ID: " << id << " Name: " << name << endl;
        }
    };
}

int main()
{
    college::Student s1(1, "Sharad");
    college::Teacher t1(101, "Prof. Patil");

    s1.display();
    t1.display();

    return 0;
}