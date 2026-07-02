class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>m;
        for(char num:s)
        {
            
            m[num]++;
        }
        for(char num:t)
        {
            
            m[num]--;
        }
        for(auto num:m)
        {
            if(num.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};