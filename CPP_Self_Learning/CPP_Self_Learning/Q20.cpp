#include<iostream>
#include<memory>
using namespace std;

int main(){

    
    unique_ptr<int> u1 = make_unique<int>(10);
    cout<<"Unique: "<<*u1<<endl;

   
    shared_ptr<int> s1 = make_shared<int>(20);
    shared_ptr<int> s2 = s1;

    cout<<"Shared count: "<<s1.use_count()<<endl;


    weak_ptr<int> w = s1;

    if(auto temp = w.lock())
        cout<<"Weak: "<<*temp<<endl;
}