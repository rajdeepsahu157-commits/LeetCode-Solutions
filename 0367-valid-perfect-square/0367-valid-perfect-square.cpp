class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int low=0,high=num;
        while(high>=low){
           long long int mid=(low+high)/2;
            if(mid*mid == num){
                return true;
            }
            else if(mid*mid > num){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};