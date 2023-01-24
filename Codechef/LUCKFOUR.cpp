#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int num, count=0;
        cin>>num;
        while(num!=0){
            int x;
            x = num%10;
            if(x == 4)
                count++;
            num = num/10;
        }
        cout<<count<<endl;
    }
}
