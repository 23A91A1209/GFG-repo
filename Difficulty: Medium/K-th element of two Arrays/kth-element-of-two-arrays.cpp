class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
       int i=0,j=0;
       vector<int>ans(a.size()+b.size());
       int m=0;
       while(i<a.size() && j<b.size()){
           if(a[i]<b[j]){
              ans[m++]=a[i];
              i++;
           }
           else{
               ans[m++]=b[j];
               j++;
           }
       }
       while(i<a.size()){
           ans[m++]=a[i];
           i++;
       }
       while(j<b.size()){
           ans[m++]=b[j];
           j++;
       }
       int res=0;
       for(int i=0;i<ans.size();i++){
           if(i+1==k){
               res=ans[i];
           }
       }
       return res;
      
    }
};