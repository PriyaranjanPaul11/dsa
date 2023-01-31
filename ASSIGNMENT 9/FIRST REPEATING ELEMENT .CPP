int Solution::solve(vector<int> &A) {
    int n = A.size();
    int mini=-1;
    unordered_map<int,int> ump;
    for (int i = n-1;i>=0;i--)
    {
        if (ump.find(A[i]) != ump.end())
            mini= i;
        else   
            ump[A[i]] = 1;
    }
    if(mini==-1){
        return ans;
    }
    return A[mini];
}
