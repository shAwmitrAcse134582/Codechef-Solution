#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
ll a[6];
vector<ll>v1,v2;
for(ll i=0;i<6;i++){
    cin>>a[i];
}
for(ll i=0;i<3;i++){

    v1.pb(a[i]);
}
for(ll i=3;i<6;i++){
    v2.pb(a[i]);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
ll x=v1[0]*1+v1[1]*10+v1[2]*100;
ll y=v2[0]*1+v2[1]*10+v2[2]*100;
if(x>y){
    cout<<"Alice"<<endl;
} 
else if(x<y){
    cout<<"Bob"<<endl;
}  
else{
    cout<<"Tie"<<endl;
}
}
get_out;
}