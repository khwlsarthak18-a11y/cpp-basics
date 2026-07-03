class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>m;
        unordered_set<char>seen;
        if(s.length()!=t.length())
        {
           return false;
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])!=m.end())
            {
               if(m[s[i]]!=t[i]) 
               {
                return false;
               }
               
            }
            
            else{
            if(seen.find(t[i])!=seen.end())
            {
                return false;
            }
                m[s[i]] = t[i];
                seen.insert(t[i]);
            }
        }
        
     return true;
    }
};