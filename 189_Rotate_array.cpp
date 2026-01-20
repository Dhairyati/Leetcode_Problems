/*
Problem: 189. Rotate Array
Language: C++
Time Complexity: O(n)
Space Complexity: O(1)

Notes:
-Uses the reverse technique to rotate the array in-place.
-First reverses the entire array.
-Then reverses the first k elements.
-Finally reverses the remaining n-k elements.
-k is reduced using modulo to handle cases where k >= array size.
-Avoids extra space by performing all operations in-place.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
