class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        long long sum = 0, count = 0;
        //int maxi = INT_MIN;
        for (int i = 0; i < nums.size() ; i++){
            sum += nums[i];
            if ( sum > 0)
                count++;
                
        }
        return count;
    }
};