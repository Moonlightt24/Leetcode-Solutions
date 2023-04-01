/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray arr) {
        int low = 0;
        int high = arr.length() - 1;
        int mid;
        int peak;
        while (low <= high){
            mid = (low + high) / 2;
            if (arr.get(mid) >= arr.get(mid + 1) && arr.get(mid) >= arr.get(mid - 1))
                 peak = mid;
            if (arr.get(mid + 1) > arr.get(mid))
                 low = mid + 1;     
            if (arr.get(mid + 1) < arr.get(mid))
                 high = mid - 1;     
        }

         low = 0;
         high = peak;
        while (low <= high){
            mid = (low + high) / 2;
            if (arr.get(mid) == target)
                 return mid;
            if (arr.get(mid) > target)
                 high = mid - 1;     
            if (arr.get(mid) < target)
                 low = mid + 1;     
        }
        low = peak;
         high = arr.length() - 1;
        while (low <= high){
            mid = (low + high) / 2;
            if (arr.get(mid) == target)
                 return mid;
            if (arr.get(mid) > target)
                 low = mid + 1;     
            if (arr.get(mid) < target)
                  high = mid - 1;     
        }
        return -1;
        
    }
};