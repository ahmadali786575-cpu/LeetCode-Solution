class Solution {
    int KMP_MATCH(string s, string t) {
        int n = s.size();
        int m = t.size();

        if (m == 0)
            return 0;

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && s[i + j] == t[j]) {
                j++;
            }
            if (j == m) {
                return 1;
            }
        }
        return 0;
    }
public:
    int repeatedStringMatch(string a, string b) {
        if(a==b){
            return 1;
        }
        int repeat = 1;
        string temp = a;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }



        //KMP pattern search
        if(KMP_MATCH(temp,b)==1){
            return repeat;
        }

        //temp+1, KMP seach
        if(KMP_MATCH(temp+a,b)==1){
            return repeat+1;
        }


        return -1;
        
    }
};