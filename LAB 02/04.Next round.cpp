#include<iostream>
using namespace std;
int main()
{
      int a[100],count=0;
      int i,n,k;
      cin>>n>>k;
      for(i=0; i<n; i++)
      {
            cin>>a[i];
      }

      for(int j=0; j<n; j++)
      {
          if(a[j]>0 && a[j]>=a[k-1])
            {
                  count++;
            }
      }
    cout<<count<<endl;
      return 0;
}

