#include <iostream>
using namespace std;
int main()
{
    int kr,ks,g=1,r,s;
    cin>>kr>>ks;
    r=10-kr+1;
    if (ks<=10)
    {
        g=2;
        s=ks;
    }
    else
    {
        s=20-ks+1;
    }
    if (g==1)
        cout<<"Left "<<r<<" "<<s;
    else
        cout<<"Right "<<r<<" "<<s;
	return 0;
}
