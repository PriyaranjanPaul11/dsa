https://leetcode.com/problems/keep-multiplying-found-values-by-two/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int,int> umap;
        for(auto x: nums){
            umap[x]++;
        }
        for(auto x: umap){
            if(umap.find(original)!=umap.end()){
                original=original*2;
            }
        }
        return original;
    }
};
