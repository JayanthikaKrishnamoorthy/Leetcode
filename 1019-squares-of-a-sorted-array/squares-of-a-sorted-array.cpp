class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> temp;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            long long x = 1LL*nums[i]*nums[i];
            temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        return temp;
    }
};