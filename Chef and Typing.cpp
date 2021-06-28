#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s;
    double sum,sum1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a[n+2];
        double f[n+2];
        sum1=0.0;
        for(int j=0;j<n;j++)
        {
            cin>>s;
            a[j]=s;
            int l=s.length();
            sum=0.0;
            for(int i=0;i<l;i++)
            {
                if(i==0)
                    sum=sum+0.2;
                else
                {
                    if(s[i]=='j' || s[i]=='k')
                    {
                        if(s[i-1]=='d' || s[i-1]=='f')
                            sum=sum+0.2;
                        else
                            sum=sum+0.4;
                    }
                    else if(s[i]=='d' || s[i]=='f')
                    {
                        if(s[i-1]=='j' || s[i-1]=='k')
                            sum=sum+0.2;
                        else
                            sum=sum+0.4;
                    }
                }
            }
            f[j]=sum;
        }

        for(int j=0;j<n;j++)
        {
            for(int i=j+1;i<n;i++)
            {
                if(a[j]==a[i]){
                    f[i]=f[i]/2.0;
                    break;
                }
            }
        }
        for(int j=0;j<n;j++)
            sum1=sum1+f[j];
        cout<<sum1*10<<endl;
    }
    return 0;
}
