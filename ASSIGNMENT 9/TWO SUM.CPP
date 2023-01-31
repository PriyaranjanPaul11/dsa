class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> A;
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
         {
            int t = target - nums[i];
            if (m.find(t) != m.end())
             {
                A.push_back(m[t]);
                A.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        return A;
    }
};
