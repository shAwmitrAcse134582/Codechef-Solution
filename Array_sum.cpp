#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e9+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll n,s;
cin>>n>>s;
ll sum=0;
if(s<5){
    cout<<-1<<endl;
}
else{
    for(ll i=1;i<n;i++){
        // cout<<i<<" ";
        sum+=i%N;
    }
    // cout<<s-sum<<endl;
    if(sum+(s-sum)%N!=s){
        cout<<-1<<endl;
    }
    else{
        for(ll i=1;i<n;i++){
            cout<<i%N<<" ";
        }
        cout<<(s-sum)%N<<endl;
    }
}
    
}
get_out;
}