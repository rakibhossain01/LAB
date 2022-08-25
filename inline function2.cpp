#include<iostream>
using namespace std;

class inLine
{
public:
    inline void demo1()
    {
        cout<<"Inline Function 1"<<endl;
    }
    inline void demo2()
    {
        cout<<"Inline Function 2"<<endl;
    }

};
int main()
{
    inLine ob1;

    ob1.demo1();
    ob1.demo2();

    return 0;
}
