class Solution {
public:
    
    int maxLen = 0;
    int start = 0;
    
    void extend(string &s, int left, int right) {
        
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--; right++;
        }
        
        if(((right - 1) - (left + 1) + 1) > maxLen){
            maxLen = (right - 1) - (left + 1) + 1;
            start = left + 1;
        }
    }

    string longestPalindrome(string s) {
        
        for(int i = 0; i < s.size(); i++){
            extend(s, i, i);
            extend(s, i, i + 1);
        }
        
        return s.substr(start, maxLen);
    }
};