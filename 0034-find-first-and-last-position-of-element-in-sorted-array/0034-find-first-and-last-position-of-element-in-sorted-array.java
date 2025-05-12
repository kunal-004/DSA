class Solution {
    public int[] searchRange(int[] nums, int target) {
        if(nums.length == 0) return new int[]{-1,-1};
        int start = 0;
        int end = nums.length-1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(target == nums[mid]){
                return new int[]{mid-1, mid};
            } 
            if(target < nums[mid]){
                end = mid-1;
            } else{
              start = mid+1;
            }
        }
        return new int[]{-1,-1};
    }
}