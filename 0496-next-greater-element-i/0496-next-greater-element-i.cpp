class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>result;
        int n=nums2.size();
        for(int i=0;i<n;i++)
        {
            int notfound = -1;
            for(int j=i+1;j<n;j++)
            {
                
                if(nums2[i]<nums2[j])
                {
                    notfound=nums2[j];

                    break;
                }
            }
         ans.push_back(notfound);

        }
        int m=nums1.size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums1[i]==nums2[j])
                {
                  result.push_back(ans[j]);
                }
            }
        }
        return result;
    }
};