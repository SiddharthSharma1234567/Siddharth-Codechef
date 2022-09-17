#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[26],count=0;
	    for(int i=0;i<26;i++){
	        cin>>a[i];
	    }
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    for(int i=0;i<26;i++){
	        int flag=0;
	        for(int j=0;j<s.length();j++){
	            if(97+i==s[j]){
	                flag=1;
	            }
	        }
	        if(flag==0){
	            count=count+a[i];
	        }
	    }
	    cout<<count<<"\n";
	}
	
	return 0;
}
