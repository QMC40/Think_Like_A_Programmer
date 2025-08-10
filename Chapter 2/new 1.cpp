class Solution {
    static bool comp(string &a, string &b)
    {
        return a+b > b+a;
    }
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans(n);
        for(int i = 0; i < n; i++)
        {
            ans[i] = to_string(nums[i]);
        }
        sort(ans.begin(), ans.end(), comp);
        string result = "";
        for(auto ch : ans)
        {
            result += ch;
        }
        auto it = result.begin();
        while(*it == '0' && result.size() > 1)
        {
            result.erase(it);
        }
        return result;
    }
};