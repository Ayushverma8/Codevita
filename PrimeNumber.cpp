#include<iostream>
using namespace std;
int checkprime(int x)
{
 int n, i, flag=0;
  for(i=2;i<=x/2;i++)
  {
      if(x%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      return 1;
  else
      return 0;
}
int main()
{
    int n,i,c=0,k,j;
    cin>>n;
    for(i=3;i<=n;i++)
    {
        k=0;
        j=2;
        if(checkprime(i)==1)
        {
            while(k<i)
            {
                if(checkprime(j)==1)
                    k=k+j;
                j++;
            }
            if(k==i)
                c++;
        }
    }
cout<<c;
return 0;
}