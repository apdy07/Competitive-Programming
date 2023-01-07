#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x == A[i]){
            cout<<i;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"-1";
    }
}
