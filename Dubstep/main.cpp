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
    string res;
    int n = s.length();
    string str = "WUB";
    bool flag = true;
    while(flag){
        if(s.find(str) != string::npos){
            s.replace(s.find(str),str.length()," ");
        }
        else
            flag = false;
    }
    for(int i=0;i<n;i++){
        if(s[i] != ' '){
            while(s[i] != ' ' && i<n){
                res.push_back(s[i]);
                i++;
            }
            if(i != n-1)
                res += ' ';
        }
    }
    cout<<res<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 