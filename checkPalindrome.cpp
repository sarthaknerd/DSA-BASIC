
//coestudio 
#include<iostream>
uisng namesapce std;

bool checkPalindrome(string str){
 int s = 0 ;
 int e= s.length()-1;
 while(s<e){
   while(s<e && !isalnum(str[s])) s++;
   while(s<e && !isalnum(str[e])) e--;
   if(tolower(str[s]) != tolower(str[e])){
     return 0;
}else{
     s++;
     e--;
   }
 }
  return 1;
   
   
 }
