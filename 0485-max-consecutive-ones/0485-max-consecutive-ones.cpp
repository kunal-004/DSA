class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), maxC=0;
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1){
               count++;
               maxC= max(maxC, count);
            }else{
                count=0;
            }
        }
        return maxC;
    }
};