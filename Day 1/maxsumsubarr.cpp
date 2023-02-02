class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int m = nums[0];
        for(auto it : nums){
            sum += it;
            m = max(sum,m);
            if(sum < 0) sum = 0;
        }
        return m;
    }
};