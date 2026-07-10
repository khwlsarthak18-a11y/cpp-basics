class Solution {
public:
    void ps(vector<int>& nums,vector<int>&temp,int i,vector<vector<int>> &ans)
    {
        if(i==nums.size())
        {
         ans.push_back(temp);
         return;
        }
        temp.push_back(nums[i]);
        ps(nums,temp,i+1,ans);
        temp.pop_back();
        ps(nums,temp,i+1,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        ps(nums,temp,0,ans);
        return ans;
    }
};