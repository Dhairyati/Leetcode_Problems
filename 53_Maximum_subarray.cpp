/*
Problem: 53. Maximum Subarray
Language: C++
Time Complexity: O(n)
Space Complexity: O(1)

Notes:
-Uses Kadane’s Algorithm to find maximum subarray sum efficiently.
-At each index, decides whether to extend the previous subarray or start a new one.
-sum stores the maximum subarray ending at the current index.
-ans keeps track of the global maximum subarray sum.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum= nums[0];
        int ans= nums[0];

        for(int i=1;i<nums.size();i++){
            sum=max(nums[i], sum+nums[i]);
            ans=max(sum, ans);
        }
        return ans;
    }
};
