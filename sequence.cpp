#include<iostream>
using namespace std;
int func(int m)
{
    int t=0;
    while(m>0)
    {
        m=m/10;
        t++;
    }
    return t;
}
int main()
{

    int n=0,c=0,k,m=0,b=6,i=0,j,t;
    cin>>n;
    for(j=1;j<=n;j++)
    {

        for(i=1;i<=j;i++)
        {
            m=m+b;
            b=b+16;
            t=func(m);
            t=5-t;
            for(k=1;k<=t;k++)
                cout<<0;
            cout<<m<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

