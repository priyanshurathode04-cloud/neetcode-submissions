class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      int n = nums.size();
      vector<int> prefix(n);
      vector<int> suffix(n);
      vector<int> result(n);

      prefix[0] = 1;
      for(int i=1; i<=n-1; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
      }
      suffix[n-1] = 1;
      for(int j = n-2; j>=0; j--){
        suffix[j] = suffix[j+1] * nums[j+1];
      }
      for(int k = 0; k<=n-1; k++){
        result[k] = prefix[k] * suffix[k];
      }
      return result;
    }
};