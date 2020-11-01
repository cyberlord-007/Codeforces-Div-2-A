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
  
    int n,m;
    cin>>n>>m;
    int arr[m];
    int res = INT_MAX;
    for(int i=0;i<m;i++) cin>>arr[i];
    sort(arr,arr+m);
    for(int i=0;i<m-n;i++)
        res = min(res,arr[i+n-1]-arr[i]);
    cout<<res<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 