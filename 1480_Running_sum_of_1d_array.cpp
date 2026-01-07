/*
Problem: 1480. Running Sum of 1D Array
Language: C++
Time Complexity: O(n)
Space Complexity: O(n)

Notes:
-reserve() is used to pre-allocate memory and reduce reallocations.
-Empty input is handled safely as a defensive check.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());

        if(nums.empty()) return {};
        
        result.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            result.push_back(result[i-1]+nums[i]);
        }
        return result;
    }
};
