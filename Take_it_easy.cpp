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
ll n;
cin>>n;
ll a[n];
vector<ll>v;
ll sum=0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}
sort(a,a+n);
//ll x=sum/n;
if(sum%n!=0){
   no;
}
else{
  ll s=0;
  for(ll i=0;i<n;i++){
    s+=a[i]/2;
  }
  if(s%n==0)yes;
  else no;
}
// bool ok=true;
// for(ll i=1;i<n;i++){
//     if(a[i]%a[0]!=0){
//         ok=false;break;
//     }
// }
// if(ok)cout<<"Yes"<<endl;
// else  cout<<"No"<<endl;
    
 }
get_out;
}