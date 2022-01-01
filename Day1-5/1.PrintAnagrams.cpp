// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> res;
        map<string, vector<string>> m;
      
        int l = string_list.size();
        for(int i = 0; i<l;i++)
        {
            string s = string_list[i];
            sort(s.begin(), s.end()); //using lexicographically sorted versions of strings as Categories
            m[s].push_back(string_list[i]); //each original string gets stored under its Category
        }
        for(auto it: m) //storing these categoriezed strings in vector 
        {
            auto t = it.second;
            int l1 = t.size();
            vector<string> r;
            for(int i =  0;i<l1;i++)
            {
                r.push_back(t[i]);
            }
            res.push_back(r);
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
