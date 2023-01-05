#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==0){
            cout<<"0"<<endl;
        }else{
            while(x!=0){
            int m = x%10;
            cout<<m<<" ";
            x = x/10;
        }
        cout<<endl;
        }        
    }
    return 0;
}
