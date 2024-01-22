#include <bits/stdc++.h>
using namespace std;
#define ll long long 

ll a, b;
/*bool compe(pair<int,int>t1,pair<int,int>t2){
    if(t1.first == t2.first)return t1.second<t2.first;
    return t1.first<t2.first;
}*/
int main() {
	// your code goes here
    ll n ;
    cin>>n;
    vector<pair<ll,ll>>sch;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        sch.push_back({b,a});
    }
    sort(sch.begin(),sch.end());
    ll curr_end = sch[0].first;
    ll maxans = 1;
    for(ll i=1;i<n;i++){
        if(sch[i].first>=curr_end && sch[i].second>=curr_end){
            maxans++;
            curr_end = sch[i].second;
        }
    }
    cout<<maxans<<endl;
    return 0;
}

