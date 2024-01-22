#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false); cin.tie(NULL); 
    ll n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
        return 0;
    }
    if(n<=3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    else{
        ll startid = n%2==0?n:n-1;
        for(ll i=startid-1;i>0;i=i-2){
            cout<<i<<" ";
        }
        for(ll i=startid;i>=2;i=i-2){
            cout<<i<<" ";
        }
        if(n%2!=0){
            cout<<n<<endl;
        }
    }
    return 0;
}
