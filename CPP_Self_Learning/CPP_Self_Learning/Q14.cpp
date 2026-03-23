#include<iostream>
using namespace std;

class BankAccount
{
    double balance;

public:
    BankAccount(double b) { balance = b; }

    void deposit(double amount)
    {
        if(amount < 0)
            throw amount;
        balance += amount;
    }

    void withdraw(double amount)
    {
        if(amount < 0)
            throw amount;
        if(amount > balance)
            throw "Insufficient Balance";
        balance -= amount;
    }

    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b(5000);

    try
    {
        b.deposit(-100);
        b.withdraw(6000);
    }
    catch(double amt)
    {
        cout << "Invalid Amount: " << amt << endl;
    }
    catch(const char* msg)
    {
        cout << msg << endl;
    }

    b.display();
    return 0;
}