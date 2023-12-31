class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int>v;
        for(int i=1;i<n;i++) {
            v.push_back(i);
            fact *= i;
        }
        v.push_back(n);
        k -= 1;
        string ans;
        while(1) {
            ans += to_string(v[k/fact]);
            v.erase(v.begin() + k/fact);
            if(v.empty()) break;
            k %= fact;
            fact /= v.size();
        }

        return ans;
    }
};