#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long int sum=0;
    cin>>n;
    
    for(int i=0;i<n;i++){
        long int num;
        cin>>num;
        sum += num;
    }
    cout<<abs(sum);
}
