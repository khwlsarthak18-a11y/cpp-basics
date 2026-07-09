class Solution {
public:
    bool CanTake(vector<int>&weights,int mid,int days)
    {
        int day=1;
        int current=0;
        for(int i=0;i<weights.size();i++)
        {
            if(current + weights[i]<=mid)
            {
                current+=weights[i];
            }
            else{
                day++;
                current=weights[i];
            }
        }
        if(day<=days)
        {
            return true;
        }
        
     return false;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int st=*max_element(begin(weights),end(weights));
        int end=accumulate(weights.begin(),weights.end(),0);
        while(st<end){
            int mid=st+(end-st)/2;
            if(CanTake(weights,mid,days))
            {
                end=mid;
            }
            else{
                st=mid+1;
            }
        }
        return st;

    }
};