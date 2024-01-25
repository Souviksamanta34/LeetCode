class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> nums2(2);
        int i,j,t;
        t = nums.size();
        for(i=0;i<t ;i++){
             for(j=i+1;j<t;j++){
                 if(nums[i]+nums[j]==target){
                    nums2[0]=i;
                    nums2[1]=j;
                    //return nums2;
                 }
             }
        }
        return nums2;
    }
};