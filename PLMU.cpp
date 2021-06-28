#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int c=0,c1=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]==2)
                c++;
            if(a[i]==0)
                c1++;
        }

        cout<<((c*(c-1))/2)+((c1*(c1-1))/2)<<endl;
    }
}

/*
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(a[i]*a[j]==a[i]+a[j])
                    sum++;
            }
        }
        cout<<sum<<endl;
    }
}
*/
