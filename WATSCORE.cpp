#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,s,i,a[11];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=10;i++)
        {
            a[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            cin>>p>>s;
            if(a[p]<s && p<=8)
                a[p]=s;
        }
        int sum=0;
        for(i=1;i<=9;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}
