class Solution {
public:
    int mySqrt(int x) {
        int st = 0, end = x;
        int ans =0 ;

        while(st<=end){
            int mid = st+(end-st)/2;
            long long sum = 1LL * mid * mid;
            if(sum==x){
                return mid;

            }
            else if(sum>x){
                end = mid-1;
            }
            else{
                ans = mid;
                st = mid+1;
            }

        }
        return ans;
        
    }
};