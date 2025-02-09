class Solution {
    public:
        bool check(vector<int>& nums) {
            // int n = nums.size();
            // for(int i=0 ; i<n ; i++){
            //     vector<int>sorted(n);
            //     int idx = 0;
            //     for(int j=i ; j<n ; j++){
            //         sorted[idx] = nums[j];
            //         idx++;
            //     }
            //     for(int j=0 ; j<i ; j++){
            //         sorted[idx] = nums[j];
            //         idx++;
            //     }
            //     bool isSorted = true;
            //     for(int k=0 ; k<n-1 ; k++){
            //         if(sorted[k] > sorted[k+1]){
            //             isSorted = false;
            //             break;
            //         }
            //     }
            //     if(isSorted == true) return true;
            // }
            // return false;
    
            // APPROACH - 2
            int peak = 0;
            int n = nums.size();
            for(int i=0 ; i<n ; i++){
                if(nums[i] > nums[(i+1)%n]){
                    peak++;
                }
            }
            return peak <=1;
        }
    };
