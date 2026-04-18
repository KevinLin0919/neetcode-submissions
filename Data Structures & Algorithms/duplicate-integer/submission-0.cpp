class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ar;
        for(int x : nums){
            ar.insert(x);
        }
        return !(ar.size() == nums.size());
    }
};