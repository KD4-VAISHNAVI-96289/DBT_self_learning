#include<iostream>
#include<cstring>
using namespace std;

class Payment
{
public:
    virtual void makePayment(double amount) = 0;
};

class CreditCard : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Paid " << amount << " using Credit Card\n";
    }
};

class UPI : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Paid " << amount << " using UPI\n";
    }
};

class Cash : public Payment
{
public:
    void makePayment(double amount)
    {
        cout << "Paid " << amount << " using Cash\n";
    }
};

class PaymentFactory
{
public:
    static Payment* create(char *mode)
    {
        if(strcmp(mode,"card")==0)
            return new CreditCard();
        else if(strcmp(mode,"upi")==0)
            return new UPI();
        else
            return new Cash();
    }
};

int main()
{
    char mode[10];
    cout << "Enter mode (card/upi/cash): ";
    cin >> mode;

    Payment *p = PaymentFactory::create(mode);
    p->makePayment(500);

    delete p;
    return 0;
}