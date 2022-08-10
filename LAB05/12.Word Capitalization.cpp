#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
    for(int i=0; i<s.size(); i++)
    {
          s[i]=towupper(s[0]);
          cout<<s<<endl;
           break;
    }
      return 0;
}
