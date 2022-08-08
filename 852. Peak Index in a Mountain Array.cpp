class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int lo=0;
        int hi=arr.size();
        
        while(hi>lo+1){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
                lo=mid;
            }
            else{
                hi=mid;
            }
        }
        return -1;
    }
};