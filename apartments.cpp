#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
    ll n ,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n,0);
    vector<ll>b(m,0);
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=0;i<m;i++){cin>>b[i];}
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll i=0;
    ll j = 0;
    int ans = 0;
    while(i<n){
        while(j<m && b[j]<a[i]-k){
            j++;
        }
        if(abs(b[j]-a[i])<=k){
            ans++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
