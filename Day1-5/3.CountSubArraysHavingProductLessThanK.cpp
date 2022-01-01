// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 // } Driver Code Ends

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int it = 0; //will store start position of each entry
        int res = 0; //will store count 
        long long int product=1;
        
        for(int i=0;i<n;i++)
        {
            product*=a[i];
            
            while(it<n && product >= k) //if the product exceeds k, start excluding numbers from right.
            {
                product/=a[it];
                it++;
            }
            res=res+(i-it+1);
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends