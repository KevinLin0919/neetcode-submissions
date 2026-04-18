class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int max = 0;
        for(int n : nums){
            s.insert(n);
        }
        for(int i = 0; i < nums.size(); i++){
            if(s.count(nums[i]-1)){
                continue;
            }
            int count = 1;
            int find = nums[i] + 1;
            while(s.count(find)){
                count++;
                find++;
            }
            max = (max > count) ? max : count;
        }
        return max;
    }
};
