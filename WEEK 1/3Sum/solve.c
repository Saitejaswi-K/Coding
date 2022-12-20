class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set <vector<int>> uset;
        for(int i=0; i<n-2; i++){
            vector <int> v;
            int s=i+1, e=n-1;
            while(s < e){
                if(nums[i] + nums[s] + nums[e] == 0){
                    v.push_back(nums[i]);
                    v.push_back(nums[s]);
                    v.push_back(nums[e]);
                    if(uset.find(v) == uset.end()){
                        uset.insert(v);
                        ans.push_back(v);
                    }
                    break;
                }
                else if(nums[i] + nums[s] + nums[e] < 0){
                    s++;
                }
                else{
                    e--;
                }
            }            
        }
        return ans;
    }
};

/*  TC: O(n*2) SC:O(n)
