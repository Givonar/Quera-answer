#include <iostream>
using namespace std;
int main()
{
    string a;
    int b=0;
    cin>>a;

    for(int l=0 ; l<=20 ; l++)
    {
        if ((a[l])==NULL)
            break;
        else
            b++;
    }
    b--;

    for(int i=0 ; i<=b ; i++)
    {
        for(int g=1 ; g<=i ; g++)
        {
            cout<<a[i];
        }
        for(int f=i ; f<=b ; f++)
        {
            cout<<a[f];
        }
        cout<<endl;
    }
	return 0;
}
