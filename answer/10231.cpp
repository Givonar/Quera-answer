#include <iostream>
using namespace std;
int main()
{
    string a,b,c,d,e;
    int f=0,g=0,h=0;

    cin>>a>>b>>c>>d>>e;

    f=a.find("MOLANA");
    if (f>=0)
    {
        g+=1;
        f=0;
    }
    else
    {
        f=a.find("HAFEZ");
        if (f>=0)
        {
            g+=1;
            f=0;
        }
    }
    f=b.find("MOLANA");
    if (f>=0)
    {
        g*=10;
        g+=2;
        f=0;
    }
    else
    {
        f=b.find("HAFEZ");
        if (f>=0)
        {
            g*=10;
            g+=2;
            f=0;
        }
    }
    f=c.find("MOLANA");
    if (f>=0)
    {
        g*=10;
        g+=3;
        f=0;
    }
    else
    {
        f=c.find("HAFEZ");
        if (f>=0)
        {
            g*=10;
            g+=3;
            f=0;
        }
    }
    f=d.find("MOLANA");
    if (f>=0)
    {
        g*=10;
        g+=4;
        f=0;
    }
    else
    {
        f=d.find("HAFEZ");
        if (f>=0)
        {
            g*=10;
            g+=4;
            f=0;
        }
    }
    f=e.find("MOLANA");
    if (f>=0)
    {
        g*=10;
        g+=5;
        f=0;
    }
    else
    {
        f=e.find("HAFEZ");
        if (f>=0)
        {
            g*=10;
            g+=5;
            f=0;
        }
    }
    if (g==0)
        cout<<"NOT FOUND!";
    else
    {
        for(int k=10000 ; k>=1 ; k/=10)
        {
            h=g/k;
            if (h>0)
            {
                g-=(h*k);
                cout<<h<<" ";
            }
        }
    }

	return 0;
}
