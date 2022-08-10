#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
      string a;
      int count=0;
      cin>>a;
      sort(a.begin(),a.end());
      for(int i=0; i<a.size(); i++)
        {
          if(a[i]!=a[i+1])
          {
                count++;
          }
        }
       if(count%2==0)
       {
          cout<<"CHAT WITH HER!"<<endl;
       }
       else
       {
          cout<<"IGNORE HIM!"<<endl;
       }
     return 0;
}
