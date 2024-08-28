#include <string>

using std::string;

/*
Approach:
1. If lengths are unequal, return false.
2. Initialize an array of size 26 to store char counts.
3. Loop through s and increment the char count array.
4. Loop through t and decrement the char count array.
5. Loop through the char count array and return false if any non-zero count.
6. If loop completed without breach, return true.

Time Complexity:
- O(n) for both of the strings, constant for the char count array

Space Complexity:
- O(1) char count arrays are constant size
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int count[26] = {0};

        for (char ch : s) {
            count[ch - 'a']++;
        }

        for (char ch : t) {
            count[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) {
                return false;
            } 
        }

        return true;
    }
};
