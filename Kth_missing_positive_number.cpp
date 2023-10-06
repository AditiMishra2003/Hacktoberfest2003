//This is a simple solution to the one of the leetcode question in which we need to find Kth missing positive number.
//This solution involves simple binary search.
class Solution {
   public:
        int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
    
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-(mid+1);
        if (missing<k) {
           low=mid+1;        
        }
        else{
            high=mid-1;
        }
    }
    return low+k;
    }

    
};
