class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
     unordered_map<string,int>mp;
       string sum=s1+' '+s2;
       string temp="";
       for(int i=0;i<sum.length();i++)
       {
             if(sum[i]==' ')
             {
                mp[temp]++;
                temp="";
             }
             else
             {
                temp+=sum[i];
             }
       }
       mp[temp]++;
       vector<string>ans;
       for(auto i:mp)
       {
        if(i.second==1)
        ans.push_back(i.first);
       }
      
       return ans;
    }
};
