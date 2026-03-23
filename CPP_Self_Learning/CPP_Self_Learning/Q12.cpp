#include<iostream>
using namespace std;

class Product
{
protected:
    string title;
    double price;

public:
    virtual void accept()
    {
        cout << "Enter Title and Price: ";
        cin >> title >> price;
    }

    virtual void display() {}
};

class Book : public Product
{
    int pages;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter Pages: ";
        cin >> pages;
    }

    void display()
    {
        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
    int playtime;

public:
    void accept()
    {
        Product::accept();
        cout << "Enter Playtime: ";
        cin >> playtime;
    }

    void display()
    {
        cout << "Playtime: " << playtime << endl;
    }
};

int main()
{
    Product *arr[5];
    int choice;

    for(int i=0;i<5;i++)
    {
        cout << "1.Book 2.Tape: ";
        cin >> choice;

        if(choice==1)
            arr[i] = new Book();
        else
            arr[i] = new Tape();

        arr[i]->accept();
    }

    cout << "\nOnly Pages / Playtime:\n";
    for(int i=0;i<5;i++)
        arr[i]->display();

    for(int i=0;i<5;i++)
        delete arr[i];

    return 0;
}