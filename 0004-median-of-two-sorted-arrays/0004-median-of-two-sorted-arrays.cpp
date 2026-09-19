class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<float>ans;
        for(int i=0;i<n1;i++){
            ans.push_back(nums1[i]);
        }
         for(int i=0;i<n2;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        float n=0;
        int j=ans.size();
        if(j%2==0){
            n=(ans[j/2]+ans[j/2-1])/2;
        }
        else{
        n=ans[j/2];
        }
        return n;
    }
};