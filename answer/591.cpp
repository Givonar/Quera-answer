#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for (int i=1 ; i<=x ; i++)
        cout<<"*";
    cout<<endl;
    for (int i=1 ; i<=(x-2) ; i++)
    {
        cout<<"*";
        for(int y=1 ; y<=(x-2) ; y++)
            cout<<" ";
        cout<<"*"<<endl;
    }
    for (int i=1 ; i<=x ; i++)
        cout<<"*";
	return 0;
}
