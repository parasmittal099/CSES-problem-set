#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
    ll n;
    cin>>n;
    vector<ll>arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll mid = arr[n/2];
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ans += abs(mid-arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}
