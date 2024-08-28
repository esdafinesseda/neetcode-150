#include <unordered_set>
#include <vector>

using std::unordered_set, std::vector;

/*
Approach:
- Create set to store seen value. 
- Loop through each element in nums. 
    - If seen return true
    - Insert into seen
- False otherwise

Time Complexity: 
- O(n) for loop

Space Complexity: 
- O(n) for the set
*/
class Solution {

public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num) > 0) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};



