/*
Problem: 283. Move Zeroes
Language: C++
Time Complexity: O(n)
Space Complexity: O(1)

Notes:
-Uses two-pointer technique to rearrange elements in-place.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;
      
        // Move all non-zero elements forward
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
        }
      // Fill remaining positions with zero
        while(index<nums.size()){
            nums[index]=0;
            index++;
        }
    }
};
