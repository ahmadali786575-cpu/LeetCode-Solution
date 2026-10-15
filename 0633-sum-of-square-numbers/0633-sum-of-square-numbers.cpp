class Solution {
public:
    bool judgeSquareSum(int c) {
        int st=0, end = sqrt(c);
        while(st<=end){
            long long sum = 1LL * st * st + 1LL * end * end;
            if(sum==c){
                return true;
            }
            else if(sum>c){
                end--;
            }
            else{
                st++;
            }
        }
        return false;
    }
};