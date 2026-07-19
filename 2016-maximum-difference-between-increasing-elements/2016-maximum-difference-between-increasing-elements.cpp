class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        int min=nums[0];
        for (int i = 1; i < n; i++) {
            if(nums[i]>min)
            {
            int diff=nums[i]-min;
            ans=max(ans,diff);
            }
            else{
                min=nums[i];
            }
        }
        return ans;

    }
};