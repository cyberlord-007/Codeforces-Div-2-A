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
    
    int mat[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
        }
    }
    int h_swap = 0,v_swap = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j] == 1){
                h_swap = abs(i-2);
                v_swap = abs(j-2);
            }
        }
    }
    cout<<h_swap + v_swap<<endl;
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 