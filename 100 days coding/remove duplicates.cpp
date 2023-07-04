class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=0;
        map<int,int>mp;
        for(auto  i : nums)
        {
            mp[i]++;;
            if(mp[i]<=2)
            {
                nums[n++]=i;
            }
        }
        return n;
    }
};
