class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count=0, el;
        for(int i=0; i<n; i++){
           if(count==0) el = nums[i];
           if(nums[i] == el) count++;
           else count--;
        } 
        int c1=0;
        for(int j=0; j<n;j++){
            if(nums[j]==el) c1++;
        }
        if(c1 > n/2) return el;
        else return -1;
    }
};