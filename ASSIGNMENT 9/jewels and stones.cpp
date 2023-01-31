https://leetcode.com/problems/jewels-and-stones/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.size();
        int m=stones.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[jewels[i]]=1;
        }
        int sum=0;
        for(int i=0;i<m;i++)
        {
            sum+=mp[stones[i]];
        }
        return sum;
    }
};
