#include<iostream>
using namespace std;

inline int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

inline int power(int base, int exp)
{
    int result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

int main()
{
    int n = 5;

    cout << "Factorial: " << factorial(n) << endl;
    cout << "Power: " << power(2, 3) << endl;

    return 0;
}