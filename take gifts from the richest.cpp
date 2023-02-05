class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int l=gifts.size();
        while(k--)
        {
            sort(gifts.begin(),gifts.end());
           gifts[l-1]=floor(sqrt(gifts[l-1]));
        }
        long long sum=0;
        for(int i=0;i<l;i++)
            sum+=gifts[i];
         return sum;
        }
};
