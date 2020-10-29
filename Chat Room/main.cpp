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
    string str = "hello";
    int n = s.length();
    int i=0,j=0;
    int arr[5] = {0};
    while(i<n && j<5){
        if(s[i] == str[j]){
            arr[j] = 1;
            j++;
            i++;
        }
        else
            i++;
    }
    int sum = 0;
    for(int i=0;i<5;i++)
        sum += arr[i];
    if(sum/5 == 1)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 