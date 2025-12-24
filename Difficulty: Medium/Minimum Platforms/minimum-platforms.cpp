class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        vector<int>prefix(2360);
        for(int i=0;i<arr.size();i++){
            prefix[arr[i]]+=1;
            prefix[dep[i]+1]-=1;
        }
        int ans=prefix[0];
        for(int i=1;i<prefix.size();i++){
            prefix[i]=prefix[i-1]+prefix[i];
            ans=max(ans,prefix[i]);
        }
        return ans;
        
    }
};
