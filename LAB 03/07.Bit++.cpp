#include<iostream>
#include<string>
using namespace std;
int main()
{
      int x=0,n;
      string y;
      cin>>n;
      for(int i=0; i<n; i++)
      {
            cin>>y;
        if(y[1]=='+')
          {
              x++;
          }
        else
          {
              x--;
          }
      }
      cout<<x;
    return 0;
}
