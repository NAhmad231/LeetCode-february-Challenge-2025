class Solution {
    public:
        int longestMonotonicSubarray(vector<int>& nums) {
            int n = nums.size();
            int inc = 1;
            int dec = 1;
            int result = 1;
            for(int i=1 ; i<n ; i++){
                if(nums[i] > nums[i-1]){ // increasing
                    inc++;
                    dec = 1;
                    result = max(inc , result);
                } 
                else if(nums[i] < nums[i-1]){ // decreasing
                    dec++;
                    inc = 1;
                    result = max(dec , result);
                }
                else{
                    inc = 1;
                    dec = 1;
                }
            }
            return result;
        }
    };