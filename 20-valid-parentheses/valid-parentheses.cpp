class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i,l;
        char c;
        l = size(s);
        for(i=0;i<l;i++){
            if((s[i]=='(') || (s[i]=='{') || (s[i]=='[')){
                st.push(s[i]);
            }
            else if((s[i]==')') || (s[i]=='}') || (s[i]==']')){
                if(st.empty()){
                    return false;
                }
                c = st.top();
                st.pop();
                if((s[i]==')'&& c!='(') ||
                (s[i]=='}'&& c!='{') ||
                (s[i]==']'&& c!='[')){
                    return false;
                }
                
            }
        }
        return st.empty();
    }
};