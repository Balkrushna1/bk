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
        bool notpos=false;
        vector<pair<pair<int,int>,int> >v(n);
        char ar[n];
        for(int i=0;i<n;i++){
            cin>>v[i].first.first;
            cin>>v[i].first.second;
            v[i].second=i;
        }
        sort(v.begin(),v.end());
        int clasttime=0,jlasttime=0;
        for(int i=0;i<n;i++){
            if(clasttime<=v[i].first.first){
                ar[v[i].second]='C';
                clasttime=v[i].first.second;
            }
            else if(jlasttime<=v[i].first.first){
                ar[v[i].second]='J';
                jlasttime=v[i].first.second;
            }
            else{
                notpos=true;
            }
        }
        cout<<"Case #"<<k<<": ";
        if(notpos)cout<<"IMPOSSIBLE"<<endl;
        else{
            for(auto i:ar)cout<<i;cout<<endl;
        }
    }
}

