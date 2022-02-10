class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size(), s=0,f=0,ans;
        do{
            s=nums[s];
            f=nums[nums[f]];
        }while(s!=f);
        s=0;
        while(s!=f){
            s=nums[s];
            f=nums[f];
        }
        return s;
    }
};
