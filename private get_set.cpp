#include<iostream>
using namespace std;

class inLine{
private:
    int a,b;
public:
    void setter(int mainA,int mainB)
    {
        a=mainA;
        b=mainB;
        cout<<a+b<<endl;
    }
};
int main()
{
    inLine obj;
    int n,m;
    cin>>n>>m;
    obj.setter(n,m);
    return 0;
}
