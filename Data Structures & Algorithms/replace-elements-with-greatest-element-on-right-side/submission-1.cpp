class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i = arr.size()-1, prevV;
        
        while(i>=0){
            if(i==arr.size()-1) {
                prevV=arr[i];
                arr[i]=-1;
            }
            else {
                int currPrev=arr[i];
                arr[i]=max(prevV, arr[i+1]);
                prevV=currPrev;
            }
            i--;
        }
        return arr;
    }
};