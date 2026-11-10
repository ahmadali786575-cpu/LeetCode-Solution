class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long st = 1, end = 0, mid, ans=0, n = candies.size();
        for(int i=0; i<n; i++){
            if(candies[i]>end){
                end = candies[i];
            }
        }
        while(st<=end){
            mid = st+(end-st)/2;

            long long tot_candies = 0, count = 0;
            for(int i=0;i<n; i++){
                count+=candies[i]/mid;  
            }

            if(count>=k){
                ans = mid;
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;  
    }
};