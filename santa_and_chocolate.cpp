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
ll n,k;
cin>>n>>k;
ll a[n];
ll sum=0;
bool ok=false;
for(ll i=0;i<n;i++){
    cin>>a[i];
   
    // sum+=a[i];
}
sort(a,a+n);
for(ll i=0;i<n;i++){
     if(a[i]-i/(k+1)<=0){
         ok=true;
         break;
    }
}
// ll x=sum/n;
// if(x<=k && sum>=n && sum>k){
//     yes;
// }
// else no;
if(ok)no;
else yes;
    
}

get_out;
}