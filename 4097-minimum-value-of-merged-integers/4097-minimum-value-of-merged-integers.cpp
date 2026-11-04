class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX ;

        for(int i=0; i<nums.size(); i=i+2){
           int cmin;
           if(nums[i+1] > 999){
            cmin = nums[i]*10000 + nums[i+1] ;
           }else if(nums[i+1] > 99){
            cmin = nums[i]*1000 + nums[i+1] ;
           }
           else if(nums[i+1] > 9){
            cmin=nums[i]*100 + nums[i+1] ;
           }else{
            cmin=nums[i]*10 + nums[i+1] ;
           }
            mini=min(mini, cmin) ;
        }
        return mini ;
    }
};