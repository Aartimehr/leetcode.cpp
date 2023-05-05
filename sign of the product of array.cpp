class Solution {
public:
    int arraySign(vector<int>& nums) {
            int product=1;
        for (auto i : nums) {
            if (i==0) return 0;
            if (i<0) product=-product;
        }
        return product;
    }
};
