class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightSum = 0;
        std::vector<int>::iterator it;
        
        for (it = nums.begin() + 1 ; it != nums.end(); ++it)
            rightSum += *(it);
        
        if(rightSum == 0)
            return 0;
        
        int leftSum = 0;
        
        it = nums.begin();
        while((it-nums.begin()) != (nums.size()) - 1) {
            leftSum += *it;
            it++;
            rightSum -= *it;
            if(leftSum == rightSum)
                return ((it != nums.begin()) && (it != nums.end()))?(it-nums.begin()):0;
            
        }
        
        return -1;
    }
    
   
    
};