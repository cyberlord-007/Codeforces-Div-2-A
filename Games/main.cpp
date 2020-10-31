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

    int n; cin>>n;
    vector<int> h(n), a(n);
    int count = 0;
    for(int i=0;i<n;++i){
        cin>>h[i]>>a[i];
        for(int j=0;j<i;++j){
            if(h[i] == a[j])
                count++;
            if(a[i] == h[j])
                count++;
        }
    }
    cout<<count<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 