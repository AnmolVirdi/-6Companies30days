// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends

string encode(string src)
{     
  string s;
  int l = src.length();
  
  for(int i = 0;i<l;)
  {
      char x = src[i];
      int j = i+1;
      int count = 1;
      while(src[j]==x)
      {
          count++;
          j++;
      }
      i = j; //index updation for next iteration
      s = s + x + to_string(count);
  }
  return s;
}     
