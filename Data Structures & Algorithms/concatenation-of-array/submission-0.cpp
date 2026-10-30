class Solution {
public:
    static vector<int> optimalO1(vector<int>& nums){
        int i=0, j=nums.size()-1;
        while(i<=j){
            nums.push_back(nums[i]);
            i++;
        }
        return nums;
    }
    vector<int> getConcatenation(vector<int>& nums) {
        return optimalO1(nums);
    }
};