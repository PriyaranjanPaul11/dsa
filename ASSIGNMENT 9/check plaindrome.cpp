https://www.interviewbit.com/problems/check-palindrome/

int Solution::solve(string A) {
    unordered_map<char,int> umap;
    for(int i=0; i<A.length(); i++){
        umap[A.at(i)]++;
    }
    int odd=0;
    for(auto x: umap){
        if(x.second%2==1){
            odd++;
        }
    }
    if(odd<2){
        return 1;
    }
    return 0;
}
