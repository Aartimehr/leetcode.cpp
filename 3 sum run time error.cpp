class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>ans;
      map<int,int>mp;
      vector<int>vec;
      for(int i=0;i<nums.size();i++)
      {
          if(mp.find((nums[i]+nums[i+1])-nums[i+2]==0)!=mp.end())
          {
            vec.push_back(nums[i]);
            vec.push_back(nums[i+1]);
            vec.push_back(nums[i+2]);
          }
          ans.push_back(vec);
      }
      return ans;
      }       
};
