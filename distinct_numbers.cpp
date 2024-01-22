#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
	// your code goes here
    ll n ;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<ll>st;
    for(auto it:arr){
        st.insert(it);
    }
    cout<< st.size() <<endl;
    return 0;
}
