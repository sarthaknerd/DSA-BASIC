#include <iostream>
using namespace std;

int main(){

int n;
bool isPrime =1;
cout<<"enter a number"<<endl;
cin>>n;
for(int i = 2;i<n;i++){
if(n%i==0){
 cout<<"not a prime"<<endl;
 isPrime = 0;
 break;
 }
 if(isPrime){
 cout<<"is a Prime Number"<<endl;
}
else{
cout<<"is Not a Prime nUmber"<<endl;
}

}
