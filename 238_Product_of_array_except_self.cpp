/*
Problem: 238. Product of Array Except Self
Language: C++
Time Complexity: O(n)
Space Complexity: O(1) (excluding output array)

Notes:
-Uses prefix and suffix product decomposition to compute result without division.
-Prefix pass stores product of all elements to the left of each index.
-Suffix pass multiplies product of all elements to the right of each index.
-Output array is reused to store prefix products, optimizing space usage.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n);

        //Prefix Products: answer[i] contains product of elements before index i
        answer[0]=1;
        for(int i=1; i<n; i++){
            answer[i]= answer[i-1]*nums[i-1];
        }

        //Suffix Products: Multiply product of elements after index i
        int suffix=1;
        for(int i=n-1; i>=0; i--){
            answer[i]*=suffix;
            suffix*=nums[i];
        }

        return answer;
    }
};
