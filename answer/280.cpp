#include <iostream>
using namespace std;
int main()
{
    int x,y,z,n=0;
    cin>>x;
    cin>>y;
    cin>>z;
    while(x>y || y>z)
    {
        if(x>y)
        {
            n=x;
            x=y;
            y=n;
        }
        if(y>z)
        {
            n=y;
            y=z;
            z=n;
        }
    }
    if((x*x)+(y*y)==(z*z))
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
