class Solution {
    public:
        int maxAscendingSum(vector<int>& nums) {
            int n = nums.size();
            int sum = nums[0];
            int smax = nums[0];
            for(int i=1 ; i<n ; i++){
                if(nums[i] <= nums[i-1]){
                    sum = nums[i];
                    cout<<sum<<" ";
                }
                else sum += nums[i];
                smax = max(sum , smax);
                cout<<smax<<" ";
            }
            return smax;
        }
    };