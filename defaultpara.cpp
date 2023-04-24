#include<iostream>
using namespace std;

int sum(int a, int b ,int c =0 ,int d =0){
    return a+b+c+d;
}


int main(){
    cout<<sum(5,10)<<endl;
    cout<<sum(5,10,15)<<endl;
    cout<<sum(5,10,15,20)<<endl;
    cout<<sum(5,10,0)<<endl;
    
}
