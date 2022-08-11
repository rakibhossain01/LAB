#include<bits/stdc++.h>
using namespace std;

class const_dest
{
public:
    double d;
    const_dest(int x2,int x1,int y2,int y1,int R)
    {
        d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
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

    int x2,x1,y2,y1,R;
    cin>>x2>>x1>>y2>>y1>>R;
    const_dest(x2,x1,y2,y1,R);

    return 0;
}
