class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, minInt = 1, maxInt = 1;
        for(int i=0; i<nums.size(); i++) {
            int a = minInt * nums[i];
            int b = maxInt * nums[i];
            maxInt = max(nums[i], max(a, b));
            minInt = min(nums[i], min(a, b));
            ans = max(maxInt, ans);
        }
        return ans;
    }
};

