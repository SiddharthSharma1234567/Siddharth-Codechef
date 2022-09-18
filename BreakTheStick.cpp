//Problem Code: BREAKSTICK
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,a;
	    cin>>n>>x;
	    a=n-x;
	    if(x%2!=0){
	        cout<<"YES\n";
	    }
	    else{
	        if(n%2==0 && x%2==0){
	            cout<<"Yes\n";
	        }
	        else{
	            cout<<"NO\n";
	        }
	    }
	}
	return 0;
}
