#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007

bool isLucky(int num){
    vector<int>v;
    while(num){
        v.push_back(num % 10);
        num /= 10;
    }
    bool flag = true;
    for(int i=0;i<v.size();i++){
        if(v[i]!=4 && v[i]!=7){
            flag = false;
            break;
        }
    }
    if(flag)
        return true;
    else
        return false;
}


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
#endif 
    
    int num; cin>>num;
    for(int i=1;i<=num;i++){
        if(isLucky(i)){
            if(num%i==0){
                cout<<"YES"<<endl;
                break;
            }
        }
        else{
            if(i == num){
                cout<<"NO"<<endl;
                break;
            }
            else
                continue;
        }
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 