#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  	ll t;
  	cin>>t;
  	while(t--)
  	{
  	ll n;
  	cin>>n;
  	vector<ll>v;
  	ll a;

  	for(ll i=0;i<2*n;i++){
  		cin>>a;
  		v.pb(a);
  	}
  	ll mn=1e9;
  
  	sort(v.begin(),v.end());
  	for(ll i=0;i<=n;i++)
  	{
  		
  		mn=min(mn,v[n+i-1]-v[i]);
  		
  	}
  	cout<<mn<<endl;
  	
  		
    }  	
     		
get_out;
}
