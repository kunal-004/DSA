class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res(2*n);
        int a=nums.size();
        int j = n;
        for(int i=0; i<n; i++){
           res[2 * i] = nums[i]; 
           res[2* i +1]=nums[j];
            j++;
        }
        return res;
    }
};