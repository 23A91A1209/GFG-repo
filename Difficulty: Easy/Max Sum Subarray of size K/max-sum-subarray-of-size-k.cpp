class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        maxi=max(maxi,sum);
        int i=0,j=k;
        while(j<arr.size()){
            sum-=arr[i];
            sum+=arr[j];
            maxi=max(maxi,sum);
             i++;
            j++;
            
            
        }
        return maxi;
        
    }
};