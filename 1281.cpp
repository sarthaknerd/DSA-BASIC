class Solution {
public:
//2
    int subtractProductAndSum(int n) {
        //int ans = 0 ;
        int sum =0 ;
        int Product =1;
        while(n!=0){
            int digit = n%10;
            sum +=digit;
            Product *=digit;
            n=n/10;
        }
         
        return ( Product -sum);
    }
};
