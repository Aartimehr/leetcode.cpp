class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size(),a=0;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
            if(nums[0]!=0) return a;
            if(nums[i]!=i){
            a=i; 
            break;}
       }
       if(a==0) a=n;
       return a;
    }
};
