#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     int x[6][6];
     int i,j,a,b;
     for(i=1; i<=5; i++)
     {
           for(j=1; j<=5; j++)
           {
            cin>>x[i][j];
             if(x[i][j]==1)
             {
                   a=abs(3-i);
                   b=abs(3-j);
                 cout<<a+b<<endl;
                 return (0);
             }
          }
     }
    return 0;
}

