class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st = 0, end = 1, n =  nums.size()-1;


        while(end<=n){
            if(nums[st]!=0){
                st++;
                end++;
            }
            else{
                if(nums[end]!=0){
                    swap(nums[st], nums[end]);
                    end++;
                    st++;
                }
                else{
                    end++;
                }
                
            }
        }  
        
        
    }
};