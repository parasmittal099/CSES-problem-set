#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
    ll n ;
    cin>>n;
    vector<ll>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans =0;
    for(ll i=0;i<n;i++){
        if(ans+1<arr[i]){
            cout<<ans+1<<endl;
            return 0;
        }
        ans+=arr[i];
    }
    cout<<ans+1<<endl;
    return 0;
}
