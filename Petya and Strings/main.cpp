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
  
    string s1,s2;
    cin>>s1>>s2;
    int res = 0;
    for(int i=0;i<s1.length();i++){
        if(tolower(s1[i]) < tolower(s2[i])){
            res =-1;
            break;
        }
        else if(tolower(s1[i]) > tolower(s2[i])){
            res = 1;
            break;
        }
    }
    cout<<res<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 