class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while ( low < high){
            mid = ( low + high) / 2;
            if (nums[mid] > nums[high])
                low = mid + 1;
              //  else if (nums[mid] == nums[high]){
                //    if (nums[low] < nums[mid])
                   //     high = mid;
            else if(nums[mid] < nums[high])
                high = mid;   
                
            else 
                high--;
                }
        
        return nums[low]; 
    }
};