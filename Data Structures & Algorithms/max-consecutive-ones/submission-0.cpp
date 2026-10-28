class Solution {
public:
    static int bruteForce(vector<int>& nums){
        int maxCount=0;
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count1++;
            else{
                if(max(count1, maxCount)==count1) {
                    maxCount=count1;
                }
                count1=0;
            }
        }
        return max(maxCount, count1);
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        return bruteForce(nums);
    }
};