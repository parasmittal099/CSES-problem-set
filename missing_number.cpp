#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here#define ll long long 
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    ll n ;
    cin>>n;
    ll arr[n-1];
    ll actualsum = 0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        actualsum += arr[i];
    }
    ll naturalsum = n*(n+1);
    naturalsum = naturalsum/2;
    cout<< naturalsum-actualsum;
    return 0;

}
