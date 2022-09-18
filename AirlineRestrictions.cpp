//Problem Code: AIRLINE

#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int a,b,c,total1,total2;
    cin>>a>>b>>c>>total1>>total2;
    if (a + b <= total1 && c <= total2)
        {
            cout << "Yes\n";
        }
        else if (b + c <= total1 && a <= total2)
        {
            cout << "Yes\n";
        }
        else if (a + c <= total1 && b<= total2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "NO\n";
        }
}
	return 0;
}
