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
        string s;cin>>s;
        stack< char >stck;
        int len=s.length();
        for(int i=0;i<len;i++){
            int d=s[i]-'0';
            for(int temp=1;temp<=d;temp++){
                if(!stck.empty()){
                    if(stck.top()==')')stck.pop();
                    else stck.push('(');
                }
                else stck.push('(');
            }
            stck.push(s[i]);
            for(int temp=1;temp<=d;temp++){
                stck.push(')');
            }
        }
        int stlen=stck.size();
        char ar[stlen];
        for(int i=stlen-1;i>=0;i--){
            ar[i]=stck.top();
            stck.pop();
        }
        cout<<"Case #"<<k<<": ";
        for(auto i:ar)cout<<i;
        cout<<endl;
    }
}

