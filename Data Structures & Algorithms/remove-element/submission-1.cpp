class Solution {
public:
    static int twoPointer(vector<int>& nums, int val){
        int i=0, j=nums.size()-1;
        int k=0;
        while(i<j){
            if(nums[i]!=val && nums[j]==val){
                i++;
                j--;
                continue;
            }
            else if(nums[i]!=val){
                i++;
                continue;
            }
            else if(nums[j]==val){
                j--;
                continue;
            }
            else{
                swap(nums[i],nums[j]);
            }
        }
        for(int l=0;l<nums.size();l++){
            if(nums[l]!=val) k++;
        }
        return k++;
    }
    int removeElement(vector<int>& nums, int val) {
        return twoPointer(nums, val);
    }
};