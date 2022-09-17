#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,p;
        bool flag=false;
        cin>>s;
        cin>>p;
        sort(s.begin(),s.end());
        sort(p.begin(),p.end());
        for(int i=0;i<n;i++){
            if(s[i]==p[i]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
	
	return 0;
}
