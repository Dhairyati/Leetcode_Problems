/*
Problem: 217. Contains Duplicate
Language: C++
Time Complexity: O(n) (average case)
Space Complexity: O(n)

Notes:
-Uses an unordered_set to track elements that have already been seen.
-Checks for existence before insertion to detect duplicates early.
-Early return is used as soon as a duplicate is found.
-Hashing provides constant average-time lookup and insertion.
-Single pass solution with optimal time complexity.
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int x : nums){
            if(seen.count(x)){
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};
