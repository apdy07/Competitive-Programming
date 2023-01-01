#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=97){
        ch = ch-32;
    }else{
        ch = ch+32;
    }
    cout<<ch;
}
