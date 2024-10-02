 
 // Problem Link : https://leetcode.com/submissions/detail/1400142424/

 class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false ;
        }
        int original = x;
        int reversed =0 ;
        while(x > 0){
            int lastDigit = x%10 ;
            if(reversed > (INT_MAX -lastDigit)/10)
            {
                return false ;
            }
            reversed = reversed *10 +lastDigit ;
        x/=10;
        }
        


         return original==reversed ;
    }
   
};