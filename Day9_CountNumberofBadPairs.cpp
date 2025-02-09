class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            int n = nums.size();
            //int badPair = 0;
            // APPROACH 1 -> T.C O(N^2)
            // for(int i=0 ; i<n-1 ; i++){
            //     for(int j = i+1 ; j<n ; j++){
            //         if(j-i != nums[j] - nums[i]) badPair++;
            //     }
            // }
            // return badPair;
    
            //APPROACH 2
            // first rearrange the eq = nums[i] - i != nums[j] - j
            // step 1 -> calculate the nums[i] - i
            for(int i=0 ; i<n ; i++){
                nums[i] = nums[i] - i;
            }
            unordered_map<int , int>mp ; // <element , no of time ele is visited>
            mp[nums[0]] = 1;
            long long result = 0;
            for(int j=1 ; j<n ; j++){
                int countOfNumsj = mp[nums[j]];
                int noBeforej = j;
    
                int badPairs = noBeforej - countOfNumsj;
    
                result += badPairs;
    
                mp[nums[j]]++;
    
            }
    
            return result;
        }
    };