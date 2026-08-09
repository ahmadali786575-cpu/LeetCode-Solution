class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT32_MAX;
        int n= nums.size();
        for(int i=0; i<n; i++){
            ans = min(ans, nums[i]);
        }
        return ans; 
    }
};