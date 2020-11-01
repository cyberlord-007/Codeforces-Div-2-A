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
    int p;
    cin>>p;
    int x[p];
    for(int i=0;i<p;i++)
        cin>>x[i];
    int q;
    cin>>q;
    int y[q];
    for(int i=0;i<q;i++)
        cin>>y[i];
    set<int>s;
    for(int i=0;i<p;i++) s.insert(x[i]);
    for(int i=0;i<q;i++) s.insert(y[i]);
    if(s.size()==4)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Ohh, my keyboard!"<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 