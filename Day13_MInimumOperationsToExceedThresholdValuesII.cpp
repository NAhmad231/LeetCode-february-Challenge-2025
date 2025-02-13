 // T.C = O(nlogn)
 // S.C = O(n)

class Solution {
public:
bool check(string part , int m , stack<char>&st){
    stack<char>temp = st;
    for(int i = m-1 ; i>=0 ; i--){ // O(m)
        if(temp.top() != part[i]){
            return false;
        }
        temp.pop();
    }
    return true;
}
    string removeOccurrences(string s, string part) {
        if n = s.size();
        m = part.size();

        APPROACH - 1 T.C = O(n*m)
        while(true){ // O(n)
            int idx = s.find(part); // O(m)
            if(idx == string :: npos){ // no valid position found -> i.e part is not found in the string -> loop breaks
                break;
            }
            s.erase(idx , part.size()) ; // O(m)
        }
        return s;

        stack<char>st;
        int m = part.size();
        int j = m-1;
        for(int i=0 ; i<s.size() ; i++){ // O(n)
            st.push(s[i]);
            if(st.size() >= part.size() && check(part , m , st) == true){ // O(m)
                for(int j=0 ; j<m ; j++){
                    st.pop();
                }
            }
        }

        string result = "";
        while(!st.empty()){
            result = st.top()+result;
            st.pop();
        }
        return result;
    }
};
