#include <iostream>
using namespace std;
int main()
{
    int x;
    int y=1;
    int z=1;
    cin>>x;
    for (y=1 ; y<=x ; y++)
    {
        z=z*y;
    }
    cout<<z;
	return 0;
}
