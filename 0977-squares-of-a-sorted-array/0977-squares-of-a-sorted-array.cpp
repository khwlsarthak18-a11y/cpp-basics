class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
           int l=nums[i]*nums[i];
           ans.push_back(l);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};