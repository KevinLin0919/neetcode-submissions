class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftP(nums.size(), 0), rightP(nums.size()-1, 0);
        vector<int> ans;
        leftP[0] = 1;
        rightP[nums.size()-1] = 1;
        for(int i = 1; i < nums.size(); i++){  
            leftP[i] = (leftP[i-1] * nums[i-1]);
        }
        for(int i = nums.size()-2; i >= 0; i--){
            rightP[i] = (rightP[i+1] * nums[i+1]);
        }
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(leftP[i] * rightP[i]);
        }
        return ans;
    } 
};
