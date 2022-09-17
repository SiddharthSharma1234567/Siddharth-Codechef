#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    if(b[i]>b[j]){
                        b[j]=0;
                    }
                    else{
                        b[i]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>8){
                b[i]=0;
            }
            count=count+b[i];
        }
        cout<<count<<endl;
    }
}