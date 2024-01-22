#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
    ll n ;
    cin>>n;
    vector<ll>arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll currsum = 0;
    ll ans = INT_MIN;
    for(ll i=0;i<n;i++){
        currsum += arr[i];
        ans = max(ans,currsum);
        if(currsum<=0){
            currsum = 0;
        }
        
    }
    cout<<ans<<endl;
}
