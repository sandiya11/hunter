#include <iostream>
using namespace std;
int main()
{
 int a[10],n,i,j,count=0;
 cin>>n;
 if((n>=1)&&(n<=10000))
  {
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  }
  else
  {
      cout<<"invalid output";
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
            if(i != j && a[i] == a[j])
            {
               count=1;
               break;
      }
      }
       if(count==1)
    {
        cout<<a[i];
        break;
       
    }
  }         
  
    if(count== 0)
    {
        cout<<"unique";
    }
}
