#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    if(n>=1&&n<=1000)
    {
    for(i=n;i>0;i--)
    {
        m=i*1;
        for(j=m;j>0;j--)
        {
            cout<<"1"<<" ";
        }
        cout<<"\n";
    }
}
else
{
    cout<<"invalid number";
}

}
