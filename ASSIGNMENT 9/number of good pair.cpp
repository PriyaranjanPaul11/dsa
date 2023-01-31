https://leetcode.com/problems/number-of-good-pairs/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int ,int>mp;
        for(int i=0;i<n;i++)
        {
            sum+=mp[nums[i]];
            mp[nums[i]]++ ;

        }
        return sum;



    }
};
