#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false); cin.tie(NULL); 
	ll n;
	cin>>n;
	queue<ll>q;
	if(n==1){
	    cout<<n;
	    return 0;
	}
	q.push(n);
	while(n!=1){
	    if(n%2==0){
	        n = n/2;
	    }
	    else{
	        n = (n*3) + 1;
	    }
	    q.push(n);
	}
	
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
