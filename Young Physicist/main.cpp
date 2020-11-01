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
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int sumx = 0,sumy = 0,sumz = 0;
    for(int i=0;i<n;i++){
        sumx += x[i];
        sumy += y[i];
        sumz += z[i];
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 