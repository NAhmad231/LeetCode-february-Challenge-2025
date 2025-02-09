class Solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            if(s1 == s2) return true;
            vector<int>diffindex;
            for(int i=0 ; i<s1.size() ; i++){
                if(s1[i] != s2[i]){ // if character are not same -> push the index into the diffindex vector
                    diffindex.push_back(i);
                }
            }
            if(diffindex.size() != 2) return false ; /// since not equal to 2 that means 1 swap can't make the string equal
    
            // now check if the size ois equal to 2 , by swapping these can the string be equal
            int idx1 = diffindex[0];
            int idx2 = diffindex[1];
            return (s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1]);
        }
    };