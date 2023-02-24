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
  	ll a,b,c,d;
  	cin>>a>>b>>c>>d;
  	double x= sqrt((a-0)*(a-0) + (b-0)*(b-0));
  	double y= sqrt((c-0)*(c-0) + (d-0)*(d-0));
  	if(x>y)
  	cout<<"ALEX"<<endl;
  	else if(x<y)
  	cout<<"BOB"<<endl;
  	else
  	cout<<"EQUAL"<<endl;
  	
  		
    }

  	
  	
  	     		
get_out;
}



