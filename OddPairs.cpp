//Problem Code: ODDPAIRS

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    //3
	    //(1,2)
	    long int n,count,ans;
	    cin>>n;
	    if(n==0){
	        cout<<"0\n";
	    }
	    else if(n%2==0){
	        count=(n*n)/4;
	        cout<<2*count<<"\n";
	    }
	    else{
	       count=(n/2)*(n-n/2);
	       cout<<2*count<<"\n";
	    }
	}
	return 0;
}
