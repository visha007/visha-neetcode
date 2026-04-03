// O(n^2)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0, max_val = 0;
        for (int i = 0; i < nums.size(); i++){
            counter = 0; //reset counter
            for (int j = i; j < nums.size(); j++){
                if (nums[j] == 0) break;
                counter++;
            }
            max_val = max(counter, max_val);
        }
        return max_val;
    }
};