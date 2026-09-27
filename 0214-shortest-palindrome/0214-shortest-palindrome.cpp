class Solution {
public:
    string shortestPalindrome(string s) {

        string rev = s;
        reverse(rev.begin(), rev.end());

        string temp = s + "#" + rev;

        vector<int> lps(temp.size(), 0);

        int pre = 0;

        for (int suf = 1; suf < temp.size(); suf++) {

            while (pre > 0 && temp[pre] != temp[suf]) {
                pre = lps[pre - 1];
            }

            if (temp[pre] == temp[suf]) {
                pre++;
            }

            lps[suf] = pre;
        }

        int addCount = s.size() - lps.back();

        string add = s.substr(lps.back(), addCount);

        reverse(add.begin(), add.end());

        return add + s;
    }
};