class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        if(matrix.length == 0) return false;
        for(int row=0; row< matrix.length; row++){
            for(int col=0; col< matrix[row].length; col++){
                if(matrix[row][col] == target){
                    return true;
                }
            }
        }
        return false;
    }
}