#include<iostream>
using namespace std;
int main()
{
      long long int m,n,a,c,d;
      cin>>m>>n>>a;
      if(m%a==0)
      {
            c=m/a;
      }
      else if(m%a!=0 && (c=(m/a)) <m)
      {
            c+=1;
      }
      else
      {
            cout<<"No"<<endl;
      }
      if(n%a==0)
      {
            d=n/a;
      }
      else if(n%a!=0 && (d=(n/a)) <n)
      {
            d+=1;
      }
      else
      {
            cout<<"No"<<endl;
      }
      cout<<c*d<<endl;
     return 0;
}
