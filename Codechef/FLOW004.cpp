#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,f;
        cin>>n;
        l=n%10;
        while(n>=10)
        {
            n=n/10;
        }
        f=n;
        cout<<l+f<<"\n";
        
    }
    return 0;
}
