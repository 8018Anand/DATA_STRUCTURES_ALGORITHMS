class Solution 
{
    void generate_all_subsets(int i,vector<int> &nums,vector<int>& use,vector<vector<int>>& ans,int n)
    {
        if(i==n)
        {
            ans.push_back(use);
            return ;
        }

        //pick
        use.push_back(nums[i]);
        generate_all_subsets(i+1,nums,use,ans,n);
        use.pop_back();
        //notpick
        generate_all_subsets(i+1,nums,use,ans,n);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> use;
        vector<vector<int>> ans;
        generate_all_subsets(0,nums,use,ans,n);
        return ans;
    }
};
