class Solution {
public:

    int climbStairs(int n) {
         int prev2 =0 , prev =1;
        for(int i=0;i<n;i++){
            int curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};