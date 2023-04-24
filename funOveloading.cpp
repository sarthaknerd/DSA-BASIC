#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}

int sum(int a, int b,int c){
    return a+b+c;
}
int main()
{
    int a = 5 ;
    int b =4;
    int c=3;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;

    return 0;
}

//output: 9
//12
