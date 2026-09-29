class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int>ans;
       int n=nums.size();
       set<int>s;
       for(auto x:nums){
        s.insert(x);
       }
       
       for(auto x:s){
        ans.push_back(x);
       }
       if(ans.size()<3){
        return ans[ans.size()-1];
       }
       return ans[ans.size()-3];
    }
};