class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        else if(nums.size() == 2){
            if(nums[0]>nums[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else{ int flag=0;
     for(int i=1;i<nums.size()-1;i++){
        if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            flag=1;
            return i;
            
        }
     }
    if(flag==0){
        if(nums[0]>nums[nums.size()-1]){
            return 0;
        }
        else{
            return nums.size()-1;
        }
    }

        }
     return{};
    }
};
