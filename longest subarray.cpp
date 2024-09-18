class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maximum;
        int ans=0;
        int res=1;
        maximum=*max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        { 
          if(nums[i]==maximum )
          ans++;
          
          else
           ans=0;
          res=max(res,ans);
         }
     return res;
    }
};
