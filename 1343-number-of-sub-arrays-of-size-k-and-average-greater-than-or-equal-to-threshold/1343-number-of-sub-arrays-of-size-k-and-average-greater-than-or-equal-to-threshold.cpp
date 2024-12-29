class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    unordered_map<long long, int> prefixSum; 
    int  sum = 0;
    int count = 0;
    int n = arr.size();
    int target = k * threshold;
      for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
     if (sum >= target) {
            count++;
        }
        for (int i = k; i < n; i++) {
            sum += arr[i];        
            sum -= arr[i - k];    
            
            if (sum >= target) {   
                count++;
            }
        }
        
        return count;
    }
};