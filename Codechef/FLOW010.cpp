#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        if(ch == 'B' || ch == 'b'){
            cout<<"BattleShip"<<endl;
        }
        else if(ch == 'c' || ch == 'C'){
            cout<<"Cruiser"<<endl;
        }
        else if(ch == 'D' || ch == 'd'){
            cout<<"Destroyer"<<endl;
        }
        else if(ch == 'F' || ch == 'f'){
            cout<<"Frigate"<<endl;
        }

    }
}
