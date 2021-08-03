#include <iostream>
using namespace std;
int main(){
    int x=4;
    int y=5;
    if(x++>4 && y++>5){
        
        cout<<"12"<<endl;
    }
    else{
        cout<<y<<endl;
        cout<<x<<endl;
        cout<<"34"<<endl;
    }
    cout<<x<<" "<<y;
}
