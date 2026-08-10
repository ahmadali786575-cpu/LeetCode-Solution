class Solution {
public:
    int findMin(vector<int>& nums) {
        int min1 = INT32_MAX;
        for(int val : nums){
            min1 = min(val, min1);
        }
        return min1;
    }
};