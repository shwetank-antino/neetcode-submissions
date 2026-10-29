class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = arr.size()-1; int maxA=0;
        vector<int> result={-1};
        while(i>0){
            maxA=max(arr[i],maxA);
            result.push_back(maxA);
            i--;
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
};