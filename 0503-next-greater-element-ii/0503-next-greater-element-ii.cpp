class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        int n=nums.size();
        stack<int>st;
       
        for(int i=nums.size()*2-1;i>=0;i--){
            while(!st.empty() && nums[i%n]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i%n]=-1;
            }
            else{
                ans[i%n]=st.top();
            }
            st.push(nums[i%n]);

        }
       return ans;
    
    }
};