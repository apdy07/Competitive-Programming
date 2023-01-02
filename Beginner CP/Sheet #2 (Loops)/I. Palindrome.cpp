#include<iostream>
using namespace std;
int main(){
    int n,t,num = 0;
    int ori_n; //variable to store original number
    cin>>n;
    ori_n = n;
    while(n!=0){
        t = n%10;
        num = num*10+t;
        n = n/10;
    }
if(ori_n == num){
    cout<<num<<endl<<"YES";
}else{
    cout<<num<<endl<<"NO";
}

return 0;
}
