class Solution {
public:
    bool isPalindrome(string s) {
        string newS= "";
        for(auto ch: s){
            if(isalnum(ch)){
                newS += tolower(ch);
            }
        }
        int l=0, r=newS.size()-1;
        while(l<=r){
        if (newS[l] != newS[r]) {
            return false;
        }
           l++;
           r--;
        }
      return true;
    }
};