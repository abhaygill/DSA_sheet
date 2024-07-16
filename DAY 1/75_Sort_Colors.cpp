
//Beats 100%.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int temp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
    }
};
