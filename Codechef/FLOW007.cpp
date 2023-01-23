#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num = 0;
        cin>>n;
        while(n!=0){
        num = (num*10)+(n%10);
        n = n/10;
        }
    cout<<num<<endl;
    }

}
