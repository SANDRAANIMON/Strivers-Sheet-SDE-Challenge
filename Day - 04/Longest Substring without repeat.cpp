/*CodeStudio solution*/

#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> last_seen(256, -1);
    int start = 0, longest = 0, n = input.size();
        
    for(int i=0; i<n; i++) {
        char ch = input[i];
        if(last_seen[ch] != -1)
            start = max(start, last_seen[ch]+1);
        last_seen[ch] = i;
        longest = max(longest, i-start+1);
    }
    return longest;
}

/*Leetcode solution*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen(256, -1);
        int start =0, longest = 0, n = s.size();
        
        for(int i=0; i<n; i++) {
            char ch = s[i];
            if(last_seen[ch] != -1)
                start = max(start, last_seen[ch]+1);
            last_seen[ch] = i;
            longest = max(longest, i-start+1);
        }
        return longest;
    }
};
