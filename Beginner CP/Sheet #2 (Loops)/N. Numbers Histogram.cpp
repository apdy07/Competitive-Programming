#include<iostream>
using namespace std;
int main(){
    char s;
    int n;
    cin>>s>>n;
    while(n--){
        int a;
        cin>>a;
        for(int i=0;i<a;i++){
            cout<<s;
        }
        cout<<endl;
    }
}
