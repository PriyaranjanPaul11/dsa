https://leetcode.com/problems/sum-of-unique-elements/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int ,int>mp;

        //for creating a map
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        //for adding the unique value
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==1)
        {
            sum+=nums[i];
        }
           
        }
        return sum;


    }
};
