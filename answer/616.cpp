#include <iostream>
using namespace std;
int main()
{
    int x,y=1;
    cin>>x;
    while (y<x || y==x)
    {
        y*=2;
    }
    cout<<y;
	return 0;
}
