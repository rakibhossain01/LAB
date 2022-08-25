#include<iostream>
using namespace std;

class baseA{
public:
    void display()
    {
        cout<<"Base Class"<<endl;
    }
    void sum()
    {
        int a=5,b=6;
        cout<<a+b<<endl;
    }
};
class derivedB:public baseA{
public:
    void print()
    {
        cout<<"Derived Class"<<endl;
    }
};
int main()
{
    derivedB ob2;
    ob2.print();
    ob2.sum();

    return 0;
}
