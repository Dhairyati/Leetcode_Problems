/*
Problem: 1. Two Sum
Language: C++
Time Complexity: O(n) (average case)
Space Complexity: O(n)

Notes:
-Uses an unordered_map to store previously seen values and their indices.
-For each element, computes the required complement (target - current value).
-Checks for the complement before inserting the current element to avoid using the same index twice.
-Early return is used as soon as a valid pair is found.
-Single-pass hashing approach provides optimal time complexity.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff=0;
        unordered_map<int,int> mp;  
        for(int i=0; i<nums.size();i++){
            diff=target-nums[i];
            if(mp.find(diff) != mp.end()){ //check if difference exists in map before the end
                return { mp[diff],i};
            }
            mp[nums[i]]=i;
        }
        return {}; //if no pair found, return empty vector for compiler
    }
};
