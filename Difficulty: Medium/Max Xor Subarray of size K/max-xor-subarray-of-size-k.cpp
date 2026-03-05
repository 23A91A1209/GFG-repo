class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int sum=0,maxi= INT_MIN;
        for(int i=0;i<k;i++){
            sum^=arr[i];
        }
        maxi=max(maxi,sum);
        int l=0,r=k;
        while(r<arr.size()){
            sum^=arr[l];
            sum^=arr[r];
            
            maxi=max(maxi,sum);
            r++;
            l++;
            
        }
        return maxi;
    }
};