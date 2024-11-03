#include <iostream>
using namespace std;
int main()
{
    int a,d=0;
    int b[7][1] = {0};
    string c;

    for(int i1=1 ; i1<=3 ; i1++)
    {
        cin>>a;
        for(int i2=1 ; i2<=a ; i2++)
        {
            cin>>c;
            if(c=="shanbe")
                b[0][0]=1;
            if(c=="1shanbe")
                b[1][0]=1;
            if(c=="2shanbe")
                b[2][0]=1;
            if(c=="3shanbe")
                b[3][0]=1;
            if(c=="4shanbe")
                b[4][0]=1;
            if(c=="5shanbe")
                b[5][0]=1;
            if(c=="jome")
                b[6][0]=1;
        }
    }
    for(int i3=0 ; i3<=6 ; i3++)
    {
        d+=b[i3][0];
    }
    cout<<7-d;
	return 0;
}
