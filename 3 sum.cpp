class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>ans;
      map<int,int>mp;
    sort(nums.begin(), nums.end());    
    if(nums.size()<3) 
    {
    return {}; 
    }
    if(nums[0]>0) 
    return {}; 
    
    for(int i=0;i<nums.size();i++)
        mp[nums[i]]=i;
    
    for(int i=0;i<nums.size()-2;i++) {
        if(i!=0 && nums[i]==nums[i-1]) continue;
        if(nums[i]>0) return ans;
        
        for(int j=i+1;j<nums.size()-1;j++) {
            
            if(j!=i+1 && nums[j]==nums[j-1]) continue;
            int key=-(nums[i]+nums[j]);
            if(mp.find(key)!=mp.end() && mp[key]>j) 
                ans.push_back({nums[i],nums[j], key});
        }
    }
    return ans;
}

};
