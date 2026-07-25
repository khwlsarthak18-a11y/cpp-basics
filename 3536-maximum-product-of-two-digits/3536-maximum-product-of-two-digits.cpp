class Solution {
public:
int sortDigits(int n) {
    
    string s = std::to_string(n);
    sort(s.begin(), s.end());
    
    return stoi(s);
}
    int maxProduct(int n) {

        int sorted=sortDigits(n);
        int pro=1;
        int temp=sorted%10;
        pro=temp*pro;
        sorted=sorted/10;
       int tempi=sorted%10;
        pro=tempi*pro;
        n=n/10;

     return pro;
      
    }
};