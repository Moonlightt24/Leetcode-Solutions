
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans ;
        unordered_map<int,int> mp ;
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto c : mp)
        {
            if(c.second >= 2)
             ans = c.first;
        }

        return ans ;
    }
};