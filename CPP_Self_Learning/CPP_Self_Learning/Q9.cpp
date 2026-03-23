#include<iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    virtual void work() = 0; // Pure virtual

    void display()
    {
        cout << "Name: " << name << " Age: " << age << endl;
    }
};

class Student : public Person
{
    int marks;

public:
    Student(string name, int age, int marks) : Person(name, age)
    {
        this->marks = marks;
    }

    void study()
    {
        cout << "Studying...\n";
    }

    void work()
    {
        cout << "Student Working (Studying)\n";
    }
};

class Teacher : public Person
{
    double salary;

public:
    Teacher(string name, int age, double salary) : Person(name, age)
    {
        this->salary = salary;
    }

    void teach()
    {
        cout << "Teaching...\n";
    }

    void work()
    {
        cout << "Teacher Working (Teaching)\n";
    }
};

int main()
{
    Person *p;

    Student s("Sharad", 22, 90);
    Teacher t("Patil", 40, 50000);

    p = &s;
    p->work();

    p = &t;
    p->work();

    return 0;
}