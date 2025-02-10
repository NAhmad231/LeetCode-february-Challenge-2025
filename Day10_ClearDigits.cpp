class Solution {
    public:
        string clearDigits(string s) {
            // int n = s.size();
            // string result = "";
            // stack<char>st;
            // for(int i=0 ; i<n ;  i++){
            //     if(s[i] >= 'a' && s[i] <= 'z') st.push(s[i]);
            //     else st.pop();
            // }
    
            // if(st.empty()) return "";
            // else{
            //     while(!st.empty()){
            //         result += st.top(); // else rather than reversing at last add the char like = result = st.top() + result
            //         st.pop();
            //     }
            // }
            // reverse(result.begin() , result.end());
            // return result;
    
            // APPROACH - 2  T.C = O(N) and S.C = O(1)
            int i = 0;
            int j = 0;
            while(i < s.size()){ // use s.size() instead of n since the size of the string will change
                if(isdigit(s[i])){
                    if(j-1 <= 0) j = 0;
                    else j--;
                }
                else{
                    s[j] = s[i];
                    j++;
                }
                i++;
            }
            return s.substr(0,j);
        }
    };