#include<iostream>
using namespace std;
int main(){
    int passwd = 1999;
    while(1){
        int t;
        cin>>t;
        if(t == 1999){
            cout<<"Correct"<<endl;
            break;
        }else{
            cout<<"Wrong"<<endl;
            continue;
        }
    }
}
