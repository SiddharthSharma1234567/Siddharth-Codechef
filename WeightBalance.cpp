//Problem Code: WEIGHTBL

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    int diff,pro1,pro2;
	    diff=b-a;
	    pro1=c*e;
	    pro2=d*e;
	    if(diff>=pro1 && diff<=pro2){
	        cout<<"1\n";
	    }
	    else{
	        cout<<"0\n";
	    }
	}
	
	return 0;
}
