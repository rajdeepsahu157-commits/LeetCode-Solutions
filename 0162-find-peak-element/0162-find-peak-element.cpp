class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxi = max_element(nums.begin(), nums.end()) - nums.begin();
        return maxi;
    }
};
