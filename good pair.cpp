#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll t; 
  cin>>t;
  while(t--)
  {
  	ll n;
  	cin>>n;
  	ll a[n];
  	map<ll,ll>mp;
  	for(ll i=0;i<n;i++)
  	{
  		cin>>a[i];
  		mp[a[i]]++;
  	}
  	ll ans=0;
  	for(auto x:mp){
  		
  		ans+=(x.second*(x.second-1))/2;
  	}
  	cout<<ans<<endl;
  }

get_out;
}