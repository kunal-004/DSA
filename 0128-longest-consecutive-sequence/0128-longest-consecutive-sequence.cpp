class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int lrg=1;
        unordered_set <int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto it: s){
            if(s.find(it-1)==s.end()){
                int count =0;
                int x=it;
                while(s.find(x) != s.end()){
                    count++;
                    x++;
                }
                lrg= max(lrg, count);
            }
        }
        return lrg;
    }
};