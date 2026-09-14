class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int st = 0;
        int end = 1;
        int count = 0;

        while (end < nums.size()) {

            if (st == end) {
                end++;
            }
            else if (nums[end] - nums[st] < k) {
                end++;
            }
            else if (nums[end] - nums[st] > k) {
                st++;
            }
            else {
                count++;

                int left = nums[st];
                int right = nums[end];

                while (st < nums.size() && nums[st] == left)
                    st++;

                while (end < nums.size() && nums[end] == right)
                    end++;
            }
        }

        return count;
    }
};