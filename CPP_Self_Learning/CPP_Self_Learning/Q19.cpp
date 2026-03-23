#include<iostream>
#include<list>
#include<algorithm>
using namespace std;



int main()
{
    list<int> l1;

    
    l1.push_back(23);
    l1.push_back(5);
    l1.push_back(78);
    l1.push_back(12);
    l1.push_back(45);
    l1.push_back(9);
    l1.push_back(34);
    l1.push_back(67);
    l1.push_back(1);
    l1.push_back(50);

    cout<<"Original List : ";
    list<int>::iterator itr = l1.begin();
    while(itr != l1.end())
    {
        cout<<*itr<<" , ";
        itr++;
    }

    // 1. Display list in reverse using iterator
    cout<<"Reverse List : "<<endl;
    list<int>::reverse_iterator ritr = l1.rbegin();
    while(ritr != l1.rend())
    {
        cout<<*ritr<<" , ";
        ritr++;
    }

    // 2. Increment each element by 5
    itr = l1.begin();
    while(itr != l1.end())
    {
        *itr = *itr + 5;
        itr++;
    }

    // 3. Display using const iterator
    cout<<"After Increment (+5) : "<<endl;
    list<int>::const_iterator citr = l1.begin();
    while(citr != l1.end())
    {
        cout<<*citr<<" , ";
        citr++;
    }

    // 4. Sort the list
    l1.sort();

    // 5. Display sorted list
    cout<<"Sorted List : "<<endl;
    itr = l1.begin();
    while(itr != l1.end())
    {
        cout<<*itr<<" , ";
        itr++;
    }

    return 0;
}