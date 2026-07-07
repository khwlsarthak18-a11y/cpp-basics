class Solution {
public:
    bool CanEatAll(vector<int>&piles,int mid,int h)
    {
        int total=0;
        for(int i=0;i<piles.size();i++)
        {
            
            int hr=piles[i]/mid;
            if(piles[i]%mid!=0)
            {
                hr++;
            }
            total+=hr;
            
        }
        if(total<=h)
            {
                return true;
            }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1;
        
        int last=*max_element(begin(piles),end(piles));
        while(st<last)
        {
            int mid=st+(last-st)/2;
            if(CanEatAll(piles,mid,h))
            {
               last=mid;
            }
            else{
                st=mid+1;
            }
        }
    return last;
    }
};