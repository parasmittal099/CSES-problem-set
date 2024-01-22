#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	 ios_base::sync_with_stdio(false); cin.tie(NULL); 
    ll n ;
    cin>>n;
    vector<ll>arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans =0;
    
    for(ll i=0;i<n-1;i++){
        if(arr[i+1]>=arr[i])continue;
        else{
            ans += arr[i]-arr[i+1];
            arr[i+1] = arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
