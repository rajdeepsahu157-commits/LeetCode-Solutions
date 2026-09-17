class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     vector<int> A(2*nums.size()) ;

        for(int i=0;i<nums.size();i++){
         A[i]=nums[i] ;
         A[nums.size()+i] = nums[i] ;
        }
        return A ;
    }
};