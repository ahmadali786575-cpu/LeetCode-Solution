class Solution {
public:
    bool isPerfectSquare(int num) {
        int st = 0, end = num;

        while(st<=end){
            int mid = st+(end-st)/2;

            long long sum = 1LL * mid * mid;

            if(sum==num){
                return true;
            }
            else if(sum< num){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return false;
        
    }
};