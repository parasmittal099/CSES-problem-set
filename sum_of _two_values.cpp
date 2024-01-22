#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
	// your code goes here
    int n , target;
    cin>>n>>target;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>mp;
    for(int i=0;i<n;i++){
        mp.push_back({arr[i],i+1});
    }
    sort(mp.begin(),mp.end());
    int lo = 0;
    int hi = n-1;
    while(lo<hi){
        int sum = mp[lo].first + mp[hi].first;
        if(sum == target){
            cout<<mp[lo].second<<" "<<mp[hi].second <<endl;
            return 0;
        }
        else if(sum>target){
            hi--;
        }
        else{
            lo ++ ;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
