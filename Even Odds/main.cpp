#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
#endif 

    ll n,k;
    cin>>n>>k;
    ll odds,evens,res;
    if(n%2 == 0){
        odds = n/2;
        evens = n/2;
    }
    else if(n%2 == 1){
        odds = (n/2) + 1;
        evens = n - odds;
    }
    if(k <= odds)
        res = (k*2)-1;
    else 
        res = (k-odds)*2;
    cout<<res;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
    
} 