#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal)
    {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance\n";
    }

    void display()
    {
        cout << "Account No: " << accountNumber << endl;
        cout << "Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount obj(101, "Sharad", 5000);

    obj.deposit(2000);
    obj.withdraw(1000);
    obj.display();

    return 0;
}