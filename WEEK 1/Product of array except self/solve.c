class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans(nums.size(), 1);
        for(int i=1; i<nums.size(); i++){
            ans[i] = nums[i-1] * ans[i-1];
        }
        int pro = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            ans[i] *= pro;
            pro *= nums[i];
        }
        return ans;
    }
};
