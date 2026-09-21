class Solution {
public:

    void rotate(string &s){
        char c = s[s.size()-1];
        int index = s.size()-2;

        while(index>=0){
            s[index+1] = s[index];
            index--;
        }
        s[0] = c;

    }
    bool rotateString(string s, string goal) {
        string cw = s;
        int n= s.size();

        for(int i=0; i<n; i++){
            rotate(cw);
            if(cw==goal){
                return true;
            }
        }
        return false;
    }
};