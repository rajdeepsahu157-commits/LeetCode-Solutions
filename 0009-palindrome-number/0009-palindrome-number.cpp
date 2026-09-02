class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=false ;
        if(x<0){
            return ans ;
        }
        else{
            int n=x , lastdig, rev=0;
            while(n!=0){
                lastdig=n%10 ;
                n=n/10 ;
                  if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0 ;
            }
                rev=rev*10 + lastdig ;
            }
            if(x==rev){
                ans=true ;
            } 
        }
        return ans ;
    }
};