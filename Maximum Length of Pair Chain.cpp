class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
         int N = pairs.size();
    int ans = 0;
    int cur = -1e9;
    for (auto& pair : pairs) {
        if (pair[0] > cur) {
            cur = pair[1];
            ans++;
        }
    }
    return ans;

    }
};
