#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    int id;
    char name[20];

    void accept()
    {
        cin >> id >> name;
    }

    void display()
    {
        cout << id << " " << name << endl;
    }
};

int main()
{
    Student s;

    // Write
    ofstream fout("student.txt");
    s.accept();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    // Read
    Student s2;
    ifstream fin("student.txt");
    fin.read((char*)&s2, sizeof(s2));
    fin.close();

    s2.display();

    return 0;
}