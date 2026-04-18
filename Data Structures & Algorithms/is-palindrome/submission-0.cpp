class Solution {
public:
    bool isPalindrome(string s) {
        string clear = "";
        for(char c : s){
            if(isalnum(c)){
                clear += tolower(c);
            }
        }
        cout << clear;
        for(int i = 0; i < (int)clear.size() / 2; i++){
            if(clear[i] != clear[clear.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};
