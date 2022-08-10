#include<iostream>
#include<string.h>
using namespace std;
int main()
{
      string a;
      cin>>a;
      for(int i=0; i<a.size(); i++)
      {
            a[i]=towlower(a[i]);
       if(a[i]=='b'||a[i]=='c'||a[i]=='d'||a[i]=='f'||a[i]=='g'||a[i]=='h'||a[i]=='j'||a[i]=='k'||a[i]=='l'||a[i]=='m'||a[i]=='n'||a[i]=='p'||a[i]=='r'||a[i]=='s'||a[i]=='t'||a[i]=='q'||a[i]=='v'||a[i]=='w'||a[i]=='x'||a[i]=='z')
      {
         cout<<"."<<a[i];
      }
}
      return 0;
}
