class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       vector<int> res = {0,0};
        for (int i = 0; i != mat.size(); ++i) {
            const int count = std::count(begin(mat[i]), end(mat[i]), 1);
            if (count > res[1]) {
                res = {i, count};
            }
        }
        return res;
    }
};