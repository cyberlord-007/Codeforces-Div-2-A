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
    
    string s;
    cin>>s;
    int n = s.length();
    int one = 0,two = 0,three = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1')
            one++;
        else if(s[i] == '2')
            two++;
        else if(s[i] == '3')
            three++;
    }
    string res;
    for(int i=0;i<one;i++){
        res += '1';
        if(res.length() != n)
            res += '+';
    }
    for(int i=0;i<two;i++){
        res += '2';
        if(res.length() != n)
            res += '+';
    }
    for(int i=0;i<three;i++){
        res += '3';
        if(res.length() != n)
            res += '+';
    }
    cout<<res<<endl;
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 