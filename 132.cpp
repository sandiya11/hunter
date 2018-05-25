#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  int n,i,a,sum=0;
  cin>>s;
  n=s.length();
  if(s[i]<=10000)
  {
  for(i=0;i<n;i++)
  {
      a=int(s[i]);
      cout<<a<<endl;
     sum=sum+a;
      
  }
  cout<<"sum:"<<sum;
}
else
{
    cout<<"invalid number";
}

}
