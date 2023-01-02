#include<iostream>
using namespace std;
int main(){
    int even=0,odd=0,pos=0,neg=0;
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        if(a%2 == 0){
            even++;
        }else{
            odd++;
        }
        if(a>0 ){
            pos++;
        }
        else if(a<0){
            neg++;
        }
        
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
}
