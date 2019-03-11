#include <iostream>
#include <fstream>

using namespace std;
class landa
{
public:
    int legaturi[5];
    int nr;
    int contor;
public:
    void completion (landa**,int,int,int);

};
void completion (landa **a,int n,int c,int d)
{
    landa b;
    int ok=0,j=1;
for(int i=0;i<n;i++)
{
    b=a[a[i][j].legaturi[a[i][j].contor]][j];
if(a[i][j].nr!=0)
    if(a[a[i][j].legaturi[a[i][j].contor]][j].nr!=0)
    {
        a[i][j].legaturi[a[i][j].nr+1]=a[a[i][j].legaturi[a[i][j].contor]][j].legaturi[0];
        a[i][j].nr++;
        for(int p=0;p<a[a[i][j].legaturi[a[i][j].contor]][j].nr;p++)
        a[a[i][j].legaturi[a[i][j].contor]][j].legaturi[p]=a[a[i][j].legaturi[a[i][j].contor]][j].legaturi[p+1];
        a[a[i][j].legaturi[a[i][j].contor]][j].nr--;
        ok=1;

    }
    else {for(int o=2;o<=c;o++)
    if(a[a[i][o].legaturi[a[i][o].contor]][o].nr!=0)
        {a[i][o].legaturi[a[i][o].nr+1]=a[a[i][o].legaturi[a[i][o].contor]][o].legaturi[0];
        a[i][j].nr++;
        for(int p=0;p<a[a[i][o].legaturi[a[i][o].contor]][o].nr;p++)
        a[a[i][o].legaturi[a[i][o].contor]][o].legaturi[p]=a[a[i][o].legaturi[a[i][o].contor]][o].legaturi[p+1];
        a[a[i][o].legaturi[a[i][o].contor]][o].nr--;
        ok=1;
       }
    }


}
if(ok==1)
    completion(a,n,c,d);
else cout<< " GATA"<<endl;
}

int main()
{
    int n,c,d;
    fstream f ("date.in");
    ofstream g("date.out");
    f>>n>>c>>d;
    landa **a;
      a= new landa* [c];
    for(int i=0;i<n;i++)
        a[i]=new landa [n];
    for(int i=0;i<n;i++)
        for(int j=0;j<=c;j++)
            {a[i][j].nr=0;
            a[i][j].contor=0;}
    int aux;
    aux=d;
    while(1)
    {
        if(aux==0)
            break;
        int i,j,k;
        f>>i>>j>>k;
        a[i][j].legaturi[a[i][j].nr]=k;
        a[i][j].nr++;
    aux--;
    }
    completion(a,n,c,d);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
        for(int j=1;j<=c;j++)
        {
            for(int p=0;p<a[i][j].nr;p++)
        cout<<" "<<i<<" "<<j<< " "<<a[i][j].legaturi[p]<<" ";
        }
    cout<<endl;
    }



    return 0;
}
