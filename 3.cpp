#include <iostream>

using namespace std;

int main()
{
int a[10],n,i,count=0;
cin>>n;
if(n>=1&&n<=10000)
{
for(i=0;i<=n;i++)
{
    cin>>a[i];
}
}
else
{
    cout<<"invalid input";
}
for(i=0;i<n;i++)
{
    if(a[i]==i)
    {
        cout<<a[i]<<" ";
    }
    else
    {
        
      count++;
    }
}
if(count==n)
{
    cout<<"-1";
}
}
