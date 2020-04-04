/*
   AUTHOR :- Balkrushna_Bhuva
*/
#include <bits/stdc++.h>

using namespace std;
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{   jaldi
    int t;cin>>t;
    for(int k=1;k<=t;k++){
        int n;cin>>n;
        int ar[n][n];
        int trace=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                cin>>ar[i][j];
                if(i==j)trace+=ar[i][j];
            }
        int norow=0,nocol=0;
        for(int i=0;i<n;i++){
            unordered_map<int,int>mp;
            for(int j=0;j<n;j++)
            {
                mp[ar[i][j]]++;
            }
            if(mp.size()!=n)norow++;
        }
        for(int j=0;j<n;j++){
            unordered_map<int,int >mp;
            for(int i=0;i<n;i++)
            {
                mp[ar[i][j]]++;
            }
            if(mp.size()!=n)nocol++;
        }
        cout<<"Case #"<<k<<": "<<trace<<" "<<norow<<" "<<nocol<<endl;
    }
}
