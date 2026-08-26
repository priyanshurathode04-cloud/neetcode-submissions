class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<int>result;
        for(int j =0; j<k; j++){
            int maxCount = -1;
            int maxNumber = -1;
            for(auto& entry : freq){
                if(entry.second > maxCount){
                    maxCount = entry.second;
                    maxNumber = entry.first;
                }
            }
            result.push_back(maxNumber);
            freq.erase(maxNumber);

        }
        return result;
    }
};