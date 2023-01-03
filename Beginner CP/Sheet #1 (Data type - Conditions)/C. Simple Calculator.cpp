#include<iostream>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int sum,diff;        //stores value of summmation and differentiation
    long long int mult;  //stores the value of multiplication
    sum = x+y;
    diff = x-y;
    mult = x*y;
    cout<<x<<" + "<<y<<" = "<<sum<<endl;
    cout<<x<<" * "<<y<<" = "<<mult<<endl;
    cout<<x<<" - "<<y<<" = "<<diff<<endl;
 
    return 0;
}
