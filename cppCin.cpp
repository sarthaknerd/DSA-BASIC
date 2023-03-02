
#include <iostream>

using namespace std;

int main()
{   cout<<"please enetr your name"<<endl;
    //char name[20];
    string name;
    cin>>name;
    name[2] = '\0';
    cout<<name;
    
    return 0;
}
