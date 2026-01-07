/*
Problem: 1. Two Sum
Language: C++
Time Complexity: O(n) (Average)
Space Complexity: O(n)

Notes:
-Used Unordered Map because fast lookup and insertion is required.
-Current element is inserted after checking to avoid using same index twice.
-Early return used to avoid unnecessary Iterations.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff=0;
        unordered_map<int,int> mp;  
        for(int i=0; i<nums.size();i++){
            diff=target-nums[i];
            if(mp.find(diff) != mp.end()){   // if complement exists in the map, a valid pair is found
                return { mp[diff],i};
            }
            mp[nums[i]]=i;
        }
        return {}; // return empty vector if no valid pair is found
    }
};
