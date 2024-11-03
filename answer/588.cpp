#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    c=b;
    for(int i=1 ; i<=(a-1) ; i++)
    {
        cin>>b;
        if (b>c)
            c=b;
    }
    cout<<c;
	return 0;
}
