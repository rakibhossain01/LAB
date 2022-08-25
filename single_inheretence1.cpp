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
    void print1()
    {
        cout<<"Derived Class1"<<endl;
    }
};
class derivedc:public derivedB{
public:
    void print()
    {
        cout<<"Derived Class"<<endl;
    }
};
int main()
{
    derivedc ob3;
    ob3.print1();
    ob3.print();
    ob3.sum();

    return 0;
}
