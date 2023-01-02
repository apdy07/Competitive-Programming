#include<iostream>
using namespace std;
int main(){
    int x,flag = 0;
    cin>>x;
    for(int i=2;i<=x-1;i++){
        if(x%i == 0){
            flag = 1;
            cout<<"NO";
            break;
        }
    }



if(x == 2 or flag == 0 ){
        cout<<"YES";
    }


}
