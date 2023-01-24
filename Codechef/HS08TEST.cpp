#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int x;
    float y;
    cin>>x>>y;
    if(x<=y-0.5 and x%5 == 0){
        cout<<fixed<<setprecision(2)<<y-x-0.5<<endl;
    }else{
        cout<<fixed<<setprecision(2)<<y<<endl;
    }
}
