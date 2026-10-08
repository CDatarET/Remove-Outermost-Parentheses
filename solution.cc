class Solution {
public:
    string removeOuterParentheses(string s) {
        string sb = "";
        int d = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                if(d++ != 0){
                    sb += "(";
                }
            }
            else{
                if(--d != 0){
                    sb += ")";
                }
            }
        }

        return sb;
    }
};
