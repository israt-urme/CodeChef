#include<bits/stdc++.h>
using namespace std;

// function to find subsequence
string subsequence(string s, int binary, int len)
{
    string sub = "";
    for (int j = 0; j < len; j++)

        // check if jth bit in binary is 1
        if (binary & (1 << j))

            // if jth bit is 1, include it
            // in subsequence
            sub += s[j];

    return sub;
}

// function to print all subsequences
int possibleSubsequences(string s,int m){

    // map to store subsequence
    // lexicographically by length
    map< string , int> sorted_subsequence;

    int len = s.size(),c;

    // Total number of non-empty subsequence
    // in string is 2^len-1
    int limit = pow(2, len);

    // i=0, corresponds to empty subsequence
    for (int i = 1; i <= limit - 1; i++) {

        // subsequence for binary pattern i
        string sub = subsequence(s, i, len);
        //edited
        //sorted_subsequence.find(sub);
        if(sorted_subsequence.find(sub)!=sorted_subsequence.end())
        {
            c=sub.length();
            if(m<c)
                m=c;
            //cout<<c<<endl;
        }
        // storing sub in map
        sorted_subsequence.insert(pair<string,int>(sub, sub.length()));
    }
    /*
    for(auto it = sorted_subsequence.begin(); it != sorted_subsequence.end(); it++) {
        cout << it->first << " " << it->second <<"\n";
    }*/
    return m;
}

int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        int m=0;
        cout<<possibleSubsequences(s,m)<<endl;
    }
    return 0;
}
