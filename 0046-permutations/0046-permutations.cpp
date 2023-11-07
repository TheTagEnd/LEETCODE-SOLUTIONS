class Solution {
public:
    void solver(int index , vector<vector<int>>& ans , vector<int> nums) {
       if(index == nums.size()){
           ans.push_back( nums) ;
       }
       for( int i =  index  ; i< nums.size() ; i++) {
       swap(nums[index] , nums[i]) ;
       solver(index+1 , ans , nums);
       swap(nums[index] , nums[i]) ;
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans ;
        solver(0 , ans , nums);
        return ans;
    }
};