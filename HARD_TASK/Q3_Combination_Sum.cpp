#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& A, int B) {
        vector<vector<int>> ans;
        sort(A.begin(), A.end());
        set<int> s(A.begin(), A.end());
        A.assign(s.begin(), s.end());
        vector<int> v;
        fnc(A, B, v, ans); // Passing ans vector to fnc
        return ans; // Returning the calculated ans vector
    }

    void fnc(vector<int>& A, int B, vector<int>& v, vector<vector<int>>& ans) {
        if (B == 0) {
            ans.push_back(v);
            return;
        }

        for (int i = 0; i < A.size(); i++) {
            if (B - A[i] >= 0) { // Corrected condition
                v.push_back(A[i]);
                fnc(A, B - A[i], v, ans);
                v.pop_back();
            }
        }
    }
};

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int x = 7;

    Solution sol;
    vector<vector<int>> result = sol.combinationSum(arr, x);

    if (result.empty()) {
        cout << "Empty" << endl;
    } 
    else {
        for (const auto& combination : result) {
            for (int num : combination) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}