class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        int res=1;
        int final=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<2;i++)
        {
           res*=nums[i];
        }
        
        for(int i=n-3;i<n;i++)
        {
            ans*=nums[i];
        }
        
        
        res=res*nums[n-1];
        final=max(res,ans);
       

        return final;
    }
};