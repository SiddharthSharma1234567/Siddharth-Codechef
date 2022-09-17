#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int tc,n,sum,count=0,sum1=0;
	    cin>>tc>>n>>sum;
	    while(tc--){
	        if(sum<n){
	            sum1=sum1+(sum*sum);
	            break;
	        }
	        else if(sum==n){
	            sum=sum-n;
	            sum1=sum1+(n*n);
	            break;
	        }
	        else{
	            sum=sum-n;
	         sum1=sum1+(n*n);   
	        }
	    }
	    
	    cout<<sum1<<"\n";
	}
	return 0;
}
