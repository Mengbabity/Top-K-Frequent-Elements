class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return {0};
        map<int, int> m;
        vector<int> res;
        vector<vector<int>> tmp(n+1);  //开始设大小为n，报错。因为标号是个数，一个数字出现一次，放的还是tmp[1],所以是n+1
        
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
