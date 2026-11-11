class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int st = 0, n = nums.size()-1 , prefix = nums[n];
        int ans = -1;
        for(int i=nums.size()-2; i>=0; i--){
            prefix = max(prefix, nums[i]);
            if(nums[i]<prefix){
                ans = max(ans, prefix-nums[i]);
            }   
        }
        return ans;
         
    }
};