#include <cmath>
class Solution {
public:
    int Findmax(vector<int>& piles){
        int n = piles.size(), maxy=INT_MIN;
        for(int i=0;i<n;i++ ){
            maxy = max(maxy, piles[i]); 
        }
        return maxy;
    }
    int totalHours(vector<int>& piles, int mid){
        int n=piles.size();
        long long total=0;
        for (int i = 0; i < n; i++) {
        total += (piles[i] + mid - 1) / mid;    
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=Findmax(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalhours = totalHours(piles, mid);
            if(totalhours <= h){
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};