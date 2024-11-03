//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        int n = a.size();
        sort(a.begin(),a.end());
        int minDiff = INT_MAX;
        
        for(int i = 0; i <= n-m; i++){
            int diff = a[i+m-1] - a[i];
            if(diff < minDiff){
                minDiff = diff;
            }
        }
        return minDiff;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
