#include <vector>
#include <unordered_set>

using namespace std;

// Time: O(n)
// Space: O(n)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for (int E : nums) {
            if (hashset.count(E) > 0) {
                return true;
            }
            hashset.insert(E);
        }
        return false;
    }
};
