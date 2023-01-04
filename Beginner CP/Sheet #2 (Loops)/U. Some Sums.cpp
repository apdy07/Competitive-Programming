#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a,b,m=0;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
       int z = i ,sum = 0;
        while(z!=0){
           int t = z%10;
            sum = sum+t;
            z=z/10;
        }
        if(sum>=a && sum<=b){
            m = m+i;
        }
        
    }

    cout<<m;
}
