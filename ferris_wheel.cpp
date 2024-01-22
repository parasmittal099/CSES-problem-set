#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
    ll n , x;
    cin>>n>>x;
    vector<ll>arr(n,0);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<bool>gandola(n,false);
    ll lo = 0;
    ll hi = n-1;
    ll ans = 0;
    while(lo<hi){
        if(arr[lo]+arr[hi]>x){
            hi--;
        }
        else{
            ans++;
            gandola[lo] = true;
            gandola[hi] = true;
            lo++;
            hi--;
        }
    }
    for(ll i=0;i<n;i++){
        if(!gandola[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
