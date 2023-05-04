class Solution {
public:
    double average(vector<int>& salary) {
        double min=salary[0];
        double max=salary[0];
        double sum=0;
        for(int i=0;i<salary.size();i++)
        {  
           if(salary[i]>max)
            max=salary[i];
            else if(salary[i]<min)
            min=salary[i];
            sum=sum+salary[i];
            
        }
       return (sum-(max+min))/(salary.size()-2);
    }
};
