class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=prices[0];
        int maxP=0,n=prices.size();
        for(int i=0; i<n; i++){
            int cost = prices[i]-minP;
            maxP= max(maxP, cost);
            minP= min(minP, prices[i]);
        }
        return maxP;
    }
};