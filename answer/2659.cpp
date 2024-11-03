#include <iostream>
using namespace std;
int main()
{
    int a,b=0;
    string c,d;
    cin>>a>>c>>d;
    for(int i=0 ; i<=a ; i++)
    {
        if(c[i]!=d[i])
            b++;
    }
    cout<<b;
	return 0;
}
