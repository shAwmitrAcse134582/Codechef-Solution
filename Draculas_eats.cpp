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
if(n==1){
    cout<<0<<endl;
}
else if(n>=2 && n<=8){
    cout<<1<<endl;
}
// else if(n>=9 && n<16){
//     cout<<2<<endl;
// }
// else if((n)%7==2){

//     cout<<n/7 + 1<<endl;
// }
// else{
//     cout<<n/7<<endl;
// }
else if(n%7>=2){
    cout<<n/7+1<<endl;
}
else{
    cout<<n/7<<endl;
}
}
get_out;
}