#include <bits/stdc++.h>
using namespace std;

class solution
{
  public:
  int optimal1_finding_max(vector<int>& arr)
  {
    int maxi=INT_MIN;
    for(auto it:arr)
    {
      if(it>maxi) maxi=it;
    }
    return maxi;
  }

  int optimal2_finding_max(vector<int>& arr)
  {
    return *max_element(arr.begin(),arr.end());
  }

  int brute_finding_max(vector<int>& arr)
  {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return arr[n-1];
  }
};

int main()
{
  solution obj;
  vector<int> nums={1,5,3,8,0,2};
  cout<<"BRUTE->Max element in array is: "<<obj.brute_finding_max(nums)<<"\n";
  cout<<"OPTIMAL1->Max element in array is: "<<obj.optimal1_finding_max(nums)<<"\n";
  cout<<"OPTIMAL2->Max element in array is: "<<obj.optimal1_finding_max(nums)<<"\n";
}


