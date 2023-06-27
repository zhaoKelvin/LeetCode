#include <string>
#include <algorithm>

using namespace std;

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and 
// removing all non-alphanumeric characters, it reads the same forward and backward. 
// Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

// Solution utilizes STL
// Beats 100% time, 92.5% memory
// Time: O(n)
// Space: O(1)
class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) -> bool { return !isalnum(c); }), s.end());
        transform(s.begin(), s.end(), s.begin(), [](char c){ return tolower(c); });
        for (int i = 0, j = s.length() - 1; i < j; ++i, --j) {
            if (s[i] != s[j]) {
                return false;
            }
        }
        return true;
    }
};