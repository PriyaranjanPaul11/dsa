https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int  n=nums.size();
        vector<int> ans;

        unordered_map<int,int>mp;
        
        
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;

        }

        for(auto x: mp){    // passing map as x
            if(x.second==2){//to check the key greater than 1
                ans.push_back(x.first);//print the key 
            }
        
        
    }
            return ans;
    }
};
