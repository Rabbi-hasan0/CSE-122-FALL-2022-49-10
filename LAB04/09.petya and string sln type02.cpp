#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string a,b;
      cin>>a;
      cin>>b;
      for(int i=0; i<a.size(); i++)
      {
            a[i]= towupper(a[i]);
            b[i]= towupper(b[i]);
      }
      if(a==b)
      {
            cout<<"0"<<endl;
      }
      else if(a<b)
      {
            cout<<"-1"<<endl;
      }
      else if(a>b)
      {
            cout<<"1"<<endl;
      }

      return 0;
}
