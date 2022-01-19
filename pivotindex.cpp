class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        int pivot=-1;
        
        int leftsum=0;
        int rightsum=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            totalsum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++)
        {
            leftsum+=nums[i];
            rightsum=totalsum-leftsum;
            if(rightsum==leftsum-nums[i])
                return i;
        }
        return pivot;
        
    }
};