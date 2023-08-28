class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size(),col=matrix[0].size();
  
        int left=0,right=row*col-1;
        while(left<=right){
            int midPos=left+(right-left)/2;
 
            int r=midPos/col,c=midPos%col;
     
            if(matrix[r][c]==target){
                return true;
            }else if(matrix[r][c]<target){
                left=midPos+1;
            }else{
                right=midPos-1;
            }
        }
        return false;

    }
};
