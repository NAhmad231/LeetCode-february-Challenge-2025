// APPROACH - 1
// T.C = O(m*n)
// S.C = O(1)

class Solution {
public:
    string removeOccurrences(string s, string part) {
        //s.length() = m
        //part.length() = n;
        //O(m*n)
        while(true) {
            int idx = s.find(part);

            if(idx == string::npos) {
                break;
            }

            s.erase(idx, part.length());
        }

        return s;
    }
};


// APPROACH - 2
//T.C : O(m*n)
//S.C : O(m)

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


//Approach-3 (Using string as a stack)
//T.C : O(m*n)
//S.C : O(1), not considering result as extra space
class Solution {
public:
    string removeOccurrences(string s, string part) {
        string result = "";
        int n = part.length();

        for(char &ch : s) {
            result.push_back(ch);

            if(result.length() >= n && result.substr(result.length() - n) == part) {
                result.erase(result.length() - n);
            }
        }

        return result;
    }
};
