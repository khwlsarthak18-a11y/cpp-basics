class Solution {
public:
    int findGCD(vector<int>& nums) {
        int largest = *max_element(begin(nums), end(nums));
        int smallest = *min_element(nums.begin(), nums.end());
        int gcd=0;
        for (int i = 1; i <= min(largest, smallest); i++) {
            if (largest % i == 0 && smallest % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};