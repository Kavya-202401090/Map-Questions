class Solution {
public:
    static bool sortbydesc(pair<int,int> a, pair<int,int> b)
    {
        return a.first > b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> finale;
        vector<pair<int,int>> result;
        for(auto n:nums)
        {
            mp[n]++;
        }
        for(auto m:mp)
        {
            result.push_back({m.second, m.first});
        }
        sort(result.begin(), result.end(), sortbydesc);
        for(int i=0;i<k;i++)
        {
            int number = result[i].second;
            finale.push_back(number);
        }
         return finale;

    }
};