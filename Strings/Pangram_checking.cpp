#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
       
         vector<bool> mark(26, false);
        int index;
    
        for (int i=0; i<str.length(); i++)
        {
            if ('A' <= str[i] && str[i] <= 'Z')
                index = str[i] - 'A';
            else if('a' <= str[i] && str[i] <= 'z')
                index = str[i] - 'a';
            mark[index] = true;
        }
        for (int i=0; i<=25; i++)
            if (mark[i] == false)
                return (false);
  
        return (true);
    }
};

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}
