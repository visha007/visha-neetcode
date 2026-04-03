// O(n)
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0, max_val = 0;
        for (int i = 0; i < nums.size(); i++){
            switch(nums[i]){
                case 0:
                    max_val = max(counter, max_val);
                    counter = 0;
                    break;
                case 1:
                    counter++;
                    break;
            }
        }
        return max(counter, max_val);
    }
};