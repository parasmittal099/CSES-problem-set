#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll a, b;
bool compe(pair<int,int>t1,pair<int,int>t2){
    if(t1.first == t2.first)return t1.second<t2.first;
    return t1.first<t2.first;
}
int main() {
	// your code goes here
    ll n ;
    cin>>n;
    vector<pair<int,int>>sch;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sch.push_back({a,1});
        sch.push_back({b,-1});
    }
    sort(sch.begin(),sch.end(),compe);
    int curr = 0;
    int maxans = INT_MIN;
    for(auto it:sch){
        curr += it.second;
        maxans = max(maxans,curr);
    }
    cout<<maxans<<endl;
    return 0;
}
