https://leetcode.com/problems/kth-distinct-string-in-an-array/submissions/879312378/


class Solution {
public:
    string kthDistinct(vector<string>& arr, int k)
     {
        unordered_map<string,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto i:arr){
             if(m[i]==1){
                k--;
                if(k==0){
                    return i;
                }
            }
        }
        return "";
    }
};
