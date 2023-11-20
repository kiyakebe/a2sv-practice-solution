class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter = 0;
        int n_leg = nums.size();
        for(int i = 0; i < n_leg; i++){
            for(int j = i + 1; j < n_leg; j++){
                if(nums[i] == nums[j]) counter ++;
            }
        }
        return counter;
    }
};