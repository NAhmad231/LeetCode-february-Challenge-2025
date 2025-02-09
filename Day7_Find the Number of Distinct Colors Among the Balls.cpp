class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            int n = queries.size();
            vector<int>result;
            unordered_map<int,int>BallColor;
            unordered_map<int,int>Colorcount;
            unordered_set<int>distinctColor;
            for(auto &q : queries){
                int ball = q[0];
                int color = q[1];
                /// ball already has a color
                if(BallColor.find(ball) != BallColor.end()){ // if ball is found in the map that means it already has a color
                    int oldColor = BallColor[ball];
                    Colorcount[oldColor]--;
                    if(Colorcount[oldColor] == 0){
                        distinctColor.erase(oldColor);
                    }
                }
                BallColor[ball] = color;
                Colorcount[color]++;
                distinctColor.insert(color);
    
                result.push_back(distinctColor.size());
            }
            return result;
        }
    };