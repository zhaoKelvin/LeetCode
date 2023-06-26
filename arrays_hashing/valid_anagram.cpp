#include <string>
#include <vector>

using namespace std;

// Time: O(n)
// Space: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        vector<int> freq(26, 0);
        for (int i = 0; i < s.length(); ++i) {
            ++freq[s[i] - 'a'];
            --freq[t[i] - 'a'];
        }
        for (int E : freq) {
            if (E != 0) {
                return false;
            }
        }
        return true;
    }
};