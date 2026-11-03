class Solution {
public:
    int solve(vector<int>& nums, int target, int index, int n) {
        if (index == n) {
            if (target == 0) {
                return 1;
            }
            return 0;
        }

        // Assign + sign
        int add = solve(nums, target - nums[index], index + 1, n);

        // Assign - sign
        int subtract = solve(nums, target + nums[index], index + 1, n);

        return add + subtract;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return solve(nums, target, 0, n);
    }
};