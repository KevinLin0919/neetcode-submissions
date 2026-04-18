class Solution {
public:
    bool isAnagram(string& a, string& b){
        if(a.size() != b.size()){
            return false;
        }
        int count[27] = {0};
        for(char c : a){
            if(c == '"') count[26]++;
            else{
                count[c - 'a']++;
            }
        }
        for(char c : b){
            if(c == '"') count[26]++;
            else{
                count[c - 'a']--;
            }
        }
        for(int n : count){
            if(n != 0){
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        for(int i = 0; i < strs.size(); i++){
            vector<string> ana;
            if(strs[i] == "0") continue; 
            for(int j = i; j < strs.size(); j++){
                if(isAnagram(strs[i], strs[j])){
                    ana.push_back(strs[j]);
                    if(i != j) strs[j] = "0";
                }
            }
            ans.push_back(ana);
        }
        return ans;
    }
};
