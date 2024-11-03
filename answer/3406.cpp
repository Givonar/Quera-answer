#include <iostream>
using namespace std;
int hal (int);
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    c=hal(a);
    d=hal(b);
    if(c<d)
    {
        cout<<a<<" < "<<b;
    }
    else if(d<c)
         {
             cout<<b<<" < "<<a;
         }
         else
         {
             cout<<b<<" = "<<a;
         }
	return 0;
}
int hal(int n)
{
    int a,s=0;

    while(n>0)
    {
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    return s;
}
