class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return {0};
        map<int, int> m;
        vector<int> res;
        vector<vector<int>> tmp(n,vector<int> {});
        
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        

        for(auto e:m)
        {
            tmp[e.second].push_back(e.first);
        }
        
        for(int i=tmp.size()-1;i>=0 && res.size()<k;i--)
        {
            for(auto p:tmp[i])
            {
                res.push_back(p);
                if(res.size()==k)
                    break;
            } 
        }
        
        return res;
    }
};
