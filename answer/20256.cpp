#include <iostream>
using namespace std;
int main()
{
    int y=0,r=0,g=5;
    string c;
    cin>>c;
    for(int i=0 ; i<=4 ; i++)
    {
        if(c[i]=='R')
        {
            r++;
            g--;
        }
        if(c[i]=='Y')
        {
            y++;
            g--;
        }
    }
    if(r>=3 || (r>=2 && y>=2) || g==0)
        cout<<"nakhor lite";
    else
        cout<<"rahat baash";
	return 0;
}
