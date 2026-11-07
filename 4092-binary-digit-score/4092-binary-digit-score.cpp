class Solution {
public:
    int calculateScore(int a, int b) {
        int s1=0,s2=0 ;
        while(a>0){
            if(a%2 == 1){
                s1++;
            }
            a /= 2;
        }
        while(b>0){
            if(b%2 == 1){
                s2++;
            }
            b /= 2;
        }
int ans ;
        if(s1 >= s2){
            ans = s1*s2 ;
        }else{
            ans = s2/s1 ;
        }
        return ans;
    }
};