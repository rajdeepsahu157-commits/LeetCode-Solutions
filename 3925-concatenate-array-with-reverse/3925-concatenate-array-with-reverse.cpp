class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[2*nums.size()-i-1]=nums[i];
        }
        return ans;
    }
};