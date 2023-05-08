class Solution {
public:
    int minOperations(vector<string>& logs) {
      stack<string>S;
      for(auto i : logs)
      {
          if(i=="./")
          {
            continue;
          }
          if(i=="../")
          {
              if(!S.empty())
              S.pop();
              continue;
          }
          S.push(i);
      }
      return S.size();

    }
};
