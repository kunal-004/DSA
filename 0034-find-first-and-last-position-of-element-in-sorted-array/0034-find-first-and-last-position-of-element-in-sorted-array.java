class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = {-1, -1};
        res[0]= find(nums, target, true);
        res[1]= find(nums, target, false);
        return res;
    }

    int find(int[] nums, int target, boolean findfirst) {
        if(nums.length == 0) {
            return -1;
        }
        int ans = -1;
        int start = 0;
        int end = nums.length - 1;
        while(start<=end){
        int mid = start + (end - start) / 2;
         if(nums[mid] < target){
                start = mid + 1;
            }else if(nums[mid] > target){
                end = mid -1;
            }else{
                ans = mid;
                if(findfirst){
                    end = mid - 1;
                }else{
                    start = mid+1;
                }
            }   
        }
        return ans;
    }
}