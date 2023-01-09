#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        if(A[i] >0){
            A[i] = 1;
        }
        else if(A[i] <0){
            A[i] = 2;
        }
        else if(A[i] == 0){
            A[i] = 0;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
