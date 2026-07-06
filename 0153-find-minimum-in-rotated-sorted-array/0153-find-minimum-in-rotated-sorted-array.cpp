class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int st=0;
        int n=nums.size();
        int end=n-1;

        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==nums[0])
            {
                return nums[mid];
            }
            else 
            {
               end=mid-1;
            }
            
        }
        return {};
    }
};