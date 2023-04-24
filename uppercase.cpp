#include <iostream>
#include<cctype>
using namespace std;

int main()
{
    string a = "coding ninjas";
    
    for(int i = 0 ;i<a.length();i++){
        putchar(toupper(a[i]));
  
    }
}
