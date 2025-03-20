//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int search(int k, vector<int>& arr) {
        // code here
        vector<int>l;
        for(int i=1;i<=arr.size();i++)
        {
            if(arr[i-1]==k)
            l.push_back(i);
        }
        if(l.empty()) return -1;
        return l[0];
    }
};



//{ Driver Code Starts.
//Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after reading t

    Solution obj; // Instantiate the Solution object outside the loop

    while (t--) {
        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline character after reading k

        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }

        int res = obj.search(k, arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends