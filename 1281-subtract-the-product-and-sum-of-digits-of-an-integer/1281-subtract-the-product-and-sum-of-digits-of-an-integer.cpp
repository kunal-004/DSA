class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int prod = 1;
        int sum = 0;

        while(n!=0){
            int digits = n % 10;
            prod = prod * digits;
            sum = sum + digits;

            n= n/10;
        }
        return prod-sum;
    }
};