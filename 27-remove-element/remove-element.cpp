#include<bits/stdc++.h>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l,i;
        l = nums.size();
        for(i=0;i<l;i++){
            if(nums[i]==val){
                nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
            }
        }
        return nums.size();
    }
};