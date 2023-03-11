class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (std::vector<int>::iterator it = nums.begin() ; it != nums.end(); ++it) {
            if (it+1 == nums.end())
                break;
            *(it+1) += *it;
        }
        return nums;
    }
};