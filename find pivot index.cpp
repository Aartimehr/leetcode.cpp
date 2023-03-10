class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      
        int sum=0;
        int lsum=0;
        for(int i : nums)
        
            sum+=i;
            for(int i=0;i<nums.size();i++)
            {
            if(lsum==(sum-nums[i]))
            return i;
            else
            {
                lsum+=nums[i];
                sum-=nums[i];
            }
            }
        
        return -1;
    }
};
