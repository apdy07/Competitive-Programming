#include <bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    int x;
    x = n;
    if(n == x){
        cout<<"int "<<x;
    }else{
        cout<<"float "<<x<<" "<<n-x;
    }
    return 0;
}
