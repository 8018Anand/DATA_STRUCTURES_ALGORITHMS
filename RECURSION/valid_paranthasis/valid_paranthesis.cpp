#include <bits/stdc++.h>
using namespace std;

class solution
{
  void generate_all_par(int lpar,int rpar,int n,string& use,vector<string>& ans)
  {
    if(lpar==n && rpar==n)
    {
      ans.push_back(use);
      return ;
    }
    if(lpar<n)
    {
      use+="(";
      generate_all_par(lpar+1,rpar,n,use,ans);
      use.pop_back();
    }
    if(lpar>rpar)
    {
      use+=")";
      generate_all_par(lpar,rpar+1,n,use,ans);
      use.pop_back();
    }
  }
  public:
  vector<string> well_formed_par(int n)
  {
    vector<string> ans;
    string use;
    generate_all_par(0,0,n,use,ans);
    return ans;
  }
};

void print(vector<string> ans)
{
  for(auto it:ans) cout<<it<<"\n";
}
int main()
{
  int n=3;
  solution obj;
  vector<string> ans=obj.well_formed_par(n);
  print(ans);
  return 0;
}