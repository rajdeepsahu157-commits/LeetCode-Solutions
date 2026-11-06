class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN ;
        for(int x=0; x<nums.size(); x++){
            int sum = sum + nums[x] ;
            maxsum=max(maxsum, sum) ;
            if(sum<0) sum=0 ;
        }
        return maxsum ;
    }
};