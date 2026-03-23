#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    float marks;

    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << " Marks: " << marks << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *ptr = new Student[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << endl;
        ptr[i].accept();
    }

    cout << "\nAll Student Records:\n";
    for(int i = 0; i < n; i++)
        ptr[i].display();

    float maxMarks = ptr[0].marks;
    for(int i = 1; i < n; i++)
    {
        if(ptr[i].marks > maxMarks)
            maxMarks = ptr[i].marks;
    }

    cout << "\nHighest Marks: " << maxMarks << endl;

    delete[] ptr;

    return 0;
}