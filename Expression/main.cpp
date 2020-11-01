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
    
    int arr[3];
    for(int i=0;i<3;i++)
        cin>>arr[i];
    int sum = 0,prod = 1;
    for(int i=0;i<2;i++){
        sum += arr[i];
        prod *= arr[i];
    }
    cout<<max((arr[1]+arr[2])*arr[0],max(sum+arr[2],max(prod+arr[2],max(sum*arr[2],prod*arr[2]))));
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 