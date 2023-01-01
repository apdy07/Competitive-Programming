#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,max = INT_MIN,min = INT_MAX;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        max = a;
        if(b>c){
            min = c;
        }else{
            min = b;
        }
    }else{
        if(b>=a && b>=c){
            max = b;
            if(a>c){
                min = c;
            }else{
                min = a;
            }
        }else{
            max= c;
            if(a>b){
                min = b;
            }else{
                min = a;
            }
        }
    }
cout<<min<<" "<<max;
}



