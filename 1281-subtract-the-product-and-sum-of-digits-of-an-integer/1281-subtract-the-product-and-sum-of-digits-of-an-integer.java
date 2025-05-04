class Solution {
    public int subtractProductAndSum(int n) {
        int prod = product(n);
        int dig = digits(n);
        return prod - dig;
    }

    static int product(int n) {
        int ans = 1;
        while (n > 0) {
        int rem = n % 10; 
        ans *= rem;  
        n = n / 10; 
    }
        return ans;
    }
    static int digits(int n) {
        int ans = 0;
        while(n > 0){
        int rem = n%10;
        ans += rem;
        n = n / 10;
        }
        return ans;
    }
}