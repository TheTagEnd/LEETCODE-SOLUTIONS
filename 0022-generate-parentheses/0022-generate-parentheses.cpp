class Solution {
public:
   vector<string > ans ; 
   void solve( int open , int close , int n  , string s ) {

       if( s.size()  == n*2) ans.push_back(s) ;
       if( open < n )  solve(open+1 , close , n , s+"(");
       if(close< open)  solve( open  , close + 1 , n , s+")");
   }
    vector<string> generateParenthesis(int n) {
        solve( 0 , 0 , n , "");

        return ans ;
    }
};