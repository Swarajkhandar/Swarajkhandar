
#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the number"<<endl;
    cin>>n;
    bool bi =true;
    for(int k=2;k<n;k++)
    {
    
        if(n%k==0)
        {cout<<"n p"<<endl;
            bi =false;
            break;
        }
       

    }if(bi){
     cout<<"prime"<<endl;
}}