class Solution {
public:
    static int bruteForce(vector<int>& nums, int val){
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val) result.push_back(nums[i]);
        }
        nums.clear();
        for(int i=0;i<result.size();i++){
            nums.push_back(result[i]);
        }
        return result.size();
    }
    int removeElement(vector<int>& nums, int val) {
        return bruteForce(nums, val);
    }
};