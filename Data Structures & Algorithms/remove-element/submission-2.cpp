class Solution {
// O(n)
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int i = 0, j = 0;
        // copy "non-val" elements to a temp vector
        while (i < nums.size()){
            if (nums[i] != val)
                temp.push_back(nums[i]);
            i++;
        } 
        /* copy back to nums - only the first 
        k elements of nums are non-val now - MVP */
        while (j < temp.size()){
            nums[j] = temp[j];
            j++;
        }
        return temp.size(); // returns k
    }
};