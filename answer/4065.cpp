#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,z=0;
    cin>>a>>b>>c;
    if (c%2!=0)
        z=1;
    cout<<((c/2+z)*a)+((c/2)*b);
	return 0;
}
