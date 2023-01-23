class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
         set<int>S;
         for(int i=0;i<nums.size();i++)
             S.insert(nums[i]);
             for(auto i : S)
             if(i==original)  original*=2;
             return original;
         }
};
