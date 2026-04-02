class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0, max_val = 0, size = nums.size();
        for (int i = 0; i < size; i++){
            counter = 0; //reset counter
            for (int j = i; j < size; j++){
                if (nums[j] == 0) break;
                counter++;
            }
            max_val = max(counter, max_val);
        }
        return max_val;
    }
};