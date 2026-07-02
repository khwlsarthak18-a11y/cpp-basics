class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_set<int>s1;
        unordered_set<int>s2;
        for(int num:nums1)
        {
            s1.insert(num);
        }
        for(int num:nums2)
        {
            if(s1.find(num)!=s1.end())
            {
                s2.insert(num);
            }
        }
        for(auto num:s2)
        {
            ans.push_back(num);
        }
        return ans;
    }
};