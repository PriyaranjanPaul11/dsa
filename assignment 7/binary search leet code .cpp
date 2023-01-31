class Solution {
public:
    int search(vector<int>& nums, int target) {

        size_t sz =nums.size();
        int r =sz -1;
        for( int i=0;i<=sz / 2; i++)
        {
            if(nums[i] == target) 
            return i;
            if( nums[r] == target) 
            
            return r;
            --r;
        }

        return -1;
    }
};       
