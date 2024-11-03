#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    for(y=1 ; y<=x ; y++)
    {
        for(int z=1 ; z<=x ; z++)
            cout<<y*z<<" ";
        cout<<endl;
    }
	return 0;
}
