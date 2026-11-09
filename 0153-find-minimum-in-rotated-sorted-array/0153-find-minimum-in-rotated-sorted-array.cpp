class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, end = nums.size()-1, ans = nums[0];

        while(st<=end){
            int mid = st+(end-st)/2;

            //left side sorted array
            if(nums[mid]>=nums[0]){
                st = mid+1;
            }
            //right side sorted array
            else{
                ans = nums[mid];
                end = mid-1;
            }
        }
        return ans;
    }
};