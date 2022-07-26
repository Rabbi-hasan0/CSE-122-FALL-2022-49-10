#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,length;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
     {
      cin>>s;
      if(s.length()>10)
      {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
      }
       else
       {
             cout<<s<<endl;
       }
     }
    getch;
}
