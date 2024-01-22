#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int n = s.length();
	char prev=s[0];
	int count=1;
	int maxcount = INT_MIN;
	for(int i=1;i<n;i++){
	    if(s[i] == prev){
	        count++;
	        maxcount = max(maxcount,count);
	    }
	    else{
	        count = 1;
	        prev = s[i];
	    }
	}
	maxcount = max(maxcount,count);
	cout<<maxcount<<endl;
	return 0;

}
