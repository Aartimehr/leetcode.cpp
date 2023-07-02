class Solution {
public:
    bool isPalindrome(int x) {
      string S=to_string(x);
      int n=S.length();
      for(int i=0;i<n;i++)
      {
          if(S[i]!=S[n-1-i])
          {
              return false;
          }
      }
      return true;

    }
};
