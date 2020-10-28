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
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n,greater<int>());
    int prefix[n];
    int res,i,sum=0;
    for(i=0;i<n;i++)
        sum += arr[i];
    int curr_sum = 0;
    for(i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum > sum - curr_sum)
            break;
    }
    res = i+1;
    cout<<res<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 