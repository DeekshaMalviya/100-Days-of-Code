//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        int original = n;
        int num_digits = 0;
        int sum = 0;
        
        int temp = n;
        while(temp>0){
            num_digits++;
            temp /=10;
        }
        
        temp = n;
        while(temp>0){
            int digit = temp %10;
            sum+= pow(digit, num_digits);
            temp /=10;
        }
        if(sum == original){
            return "true";
        }
        else{
            return "false";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
