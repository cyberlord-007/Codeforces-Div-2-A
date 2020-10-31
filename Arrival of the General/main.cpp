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
    
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++) cin>>arr[i];
    int temp[n];
    for(i=0;i<n;i++)
        temp[i] = arr[i];
    sort(temp,temp+n);
    int max = temp[n-1];
    int min = temp[0];
    int swaps = 0;
    for(i=0;i<n;i++){
        if(arr[i] == max){
            swaps = i;
            break;
        }
    }
    int idx = i;
    for(j=n-1;j>=0;j--){
        if(arr[j] == min){
            if(idx > j){
                swaps += abs(j - (n-1)) - 1;
                break;
            }
            else{
                swaps += abs(j - (n-1));
                break;
            }
        }
    }

    cout<<swaps<<endl;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 