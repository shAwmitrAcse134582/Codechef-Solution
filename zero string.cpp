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
  	ll n,c=0,d=0;
  	cin>>n;
  	string s;
  	cin>>s;
  	
  	map<ll,ll>mp;
  	sort(s.begin(),s.end());
  	if(s[0]=='0' && s[s.size()-1]=='0')
  	cout<<0<<endl;
  	else if(s[0]=='1' && s[s.size()-1]=='1')
  	  cout<<1<<endl;
  	  else{
  	  	  	for(ll i=0;i<s.size();i++){
  	 
  	           if(s[i]=='1')
  	           c++;
  	           else
  	           d++;
  	       }
  	     if(d<c)
  	     cout<<d+1<<endl;
  	     else
  	     cout<<c<<endl;
  	  }
  
  	
  }

get_out;
}