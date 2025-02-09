class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        // if(nums.size() == 1) return true;
        // int prevele ;
        // if(nums[0]%2 == 0) prevele = 0;
        // else prevele = 1;
        // int currele;
        // for(int i=1 ; i<nums.size() ; i++){
        //     if(nums[i]%2 == 0) currele = 0;
        //     else currele = 1;
        //     if(currele == prevele ) return false;
        //     else prevele = currele;
        // }
        // return true;
        if(nums.size() == 1) return true;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i]%2 == 0 && nums[i-1]%2 == 0) return false; // both even
            else if(nums[i]%2 != 0 && nums[i-1]%2 != 0) return false; // both odd
        }
        return true;
    }
};
