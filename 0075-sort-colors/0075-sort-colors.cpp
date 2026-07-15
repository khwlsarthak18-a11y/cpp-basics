class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid=0;
        int st=0;
        int end=nums.size()-1;
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[st]);
                mid++;
                st++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                
                end--;
            }
        }
    }
};