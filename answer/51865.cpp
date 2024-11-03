#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    cin>>a>>b;
    if(b==0)
        cout<<"20";
    else if (b==7)
         cout<<a;
         else
           {
            c=a-(b);
            if (c>=0)
                cout<<c;
            else
                cout<<"0";
           }
	return 0;
}
