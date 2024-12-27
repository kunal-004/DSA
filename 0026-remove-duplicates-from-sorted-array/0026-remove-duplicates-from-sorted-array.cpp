class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0, n=nums.size();
        for(int j=1; j<n; j++){
            if(nums[k] != nums[j]){
                nums[++k]=nums[j];
            }
        }
        return k+1;
    }
};