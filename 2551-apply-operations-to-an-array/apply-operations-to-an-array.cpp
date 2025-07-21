class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int x = 0;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[x]=nums[i];
                x++;
            }
        }
        while(x<nums.size()){
            nums[x]=0;
            x++;
        }
    return nums;  
    }
};