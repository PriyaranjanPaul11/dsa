https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/

class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>n;
        for(int i=0;i<nums.size();i++){
            n.insert(nums[i]);
              int rem,sum=0;
           // cout<<n[i];
           while(nums[i]!=0){
               rem=nums[i]%10;
               sum=sum*10+rem;
               nums[i]=nums[i]/10;
           }
          n.insert(sum);
           // cout<<n[i];
        }

        return n.size();
    }
};
