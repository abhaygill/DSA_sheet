
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
       }
       return -1;

    // unordered_map<int,int>dup;

    // for(const auto& it: nums){
    //     dup[it]++;
    // }
    // for(const auto& i: dup){
    //     if(i.second >1){
    //         return i.first;
    //     }
    // }
    // return 0;
    }
};
