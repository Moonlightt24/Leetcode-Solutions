class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = m;
        while ( low <= high){
            int mid = (low + high)/2;
            if(canEatInTime(piles, mid, h)) 
            high = mid - 1;
            else
            
            low = mid + 1;
        }
        return low;
    }
      bool canEatInTime(vector<int>& piles, int k, int h){
        long hours = 0;
        for(int pile : piles){
            int div = pile / k;
            hours += div;
            if(pile % k != 0) 
            hours++;
        }
        return hours <= h;
    }
};