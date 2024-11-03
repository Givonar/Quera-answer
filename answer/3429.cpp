#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x<0)
        cout<<"Ice";
    else if(x>100)
            cout<<"Steam";
         else
            cout<<"Water";
	return 0;
}
