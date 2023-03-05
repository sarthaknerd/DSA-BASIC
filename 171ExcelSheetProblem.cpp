//https://www.youtube.com/watch?v=LTuSPIGoDlA&list=PLpO3gASfJEIJZqTAEQnLeYyz_vaNWLfHS&ab_channel=Codebix
//ASCI value of a is 65
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0 ;
        for(char c : columnTitle){
            int digit = c - 'A' + 1;
            result = result *26 +digit;
        }
        return result;
    }
};
