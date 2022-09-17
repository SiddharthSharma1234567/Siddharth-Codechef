#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,count=0,count1=0;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<=n-x+1;i++){
            
            if(count>count1){
                count1=count;
            }
            count=0;
            for(int j=i;j<x+i;j++){
                count=count+a[j];
            }
        }
        cout<<count1<<endl;
    }
	
	return 0;
}
