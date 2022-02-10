class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int r=0,w=0,b=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) r++;
            else if(nums[i]==1) w++;
            else if(nums[i]==2) b++;
        }
        nums.clear();
        for(int i=0;i<r;i++) nums.push_back(0);
        for(int i=0;i<w;i++) nums.push_back(1);
        for(int i=0;i<b;i++) nums.push_back(2);
    }
};
