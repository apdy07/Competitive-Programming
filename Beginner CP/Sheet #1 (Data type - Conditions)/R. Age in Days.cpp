#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a,y,m,d;
    y = x/365;
    a = x%365;
    m = a/30;
    d = a%30;
    cout<<y<<" years"<<endl;
    cout<<m<<" months"<<endl;
    cout<<d<<" days"<<endl;


}
