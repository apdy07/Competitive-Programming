#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int checker = a/1000;
    if(checker%2 == 0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
}
