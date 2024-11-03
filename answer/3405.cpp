#include <iostream>
using namespace std;
int main()
{
    int a[1000][1]={0};
    int b,c=0;

    cin>>b;
    while(b!=0)
    {
        a[c][0]=b;
        c++;
        cin>>b;
    }
    for(int i=(c-1) ; i>=0 ; i--)
    {
        cout<<a[i][0]<<endl;
    }

	return 0;
}
