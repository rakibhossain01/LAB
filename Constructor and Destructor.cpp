#include<bits/stdc++.h>
using namespace std;

class const_dest
{
public:
    double d;
    const_dest(int x1,int y1,int x2,int y2,int R)
    {
        d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    }
    void print(int R)
    {
        if(d==R)
        {
            cout<<"Circle on"<<endl;
        }
        else if(d<R)

        {
            cout<<"Circle in"<<endl;
        }
        else
        {
            cout<<"Circle out"<<endl;
        }
    }
    ~const_dest()
    {
        cout<<"Inside destructor"<<endl;
    }

};
int main()
{

    int x1,y1,x2,y2,R;
    cin>>x1>>y1>>x2>>y2>>R;
    const_dest ob1(x1,y1,x2,y2,R);
    ob1.print(R);
    return 0;
}
