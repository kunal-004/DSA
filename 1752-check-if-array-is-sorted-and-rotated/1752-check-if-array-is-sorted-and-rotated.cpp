class Solution {
public:
    bool check(vector<int>& nums) {
       int countBreaks = 0;
       for(int i=0; i<nums.size(); i++){
         if (nums[i] > nums[(i + 1) % nums.size()]) {
            countBreaks++;
        }
            if (countBreaks > 1) {
                return false;
            }
    }
    return true; 
    }
};