class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }

        int ans = 0; // Store the final ans
        int temp=0; // store the temp solution i.e every possible solution
        for(auto it: mp){
            if(mp[it.first-1] > 0){
                temp++;
            }else{
                ans = max(ans,temp);
                temp = 0;
            }
        }
        ans = max(ans,temp);
        return ans+1;
    }
};