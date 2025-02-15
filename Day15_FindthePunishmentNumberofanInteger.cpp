class Solution {
public:
    bool check(int sq , int currSum , int target){
        if(sq == 0){
            return currSum == target;
        }
        return check( sq/10  ,currSum + sq%10 , target)||
                check( sq/100  ,currSum + sq%100, target)||
                check( sq/1000  ,currSum + sq%1000, target)||
                check( sq/10000  ,currSum + sq%10000, target);
    }

    int punishmentNumber(int n) {
        int result = 0;
        for(int nums=1 ; nums<= n ; nums++){
          int sq = nums*nums ;
          if(check(sq , 0 , nums)){
            result += sq;
          }
        } 
        return result;
    }
};
