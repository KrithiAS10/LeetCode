class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char res;
        if(s.length()==1){
            return false;
        }
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case '(':
                case '[':
                case '{': st.push(s[i]);
                            break;
                        // char def=st.top();
                        // st.pop();
                        // if(def=='(' || def=='[' || def=='{'){
                        //             return false;
                        // };
                        // break;
                case ')':if(st.empty()){
                            return false;
                        }
                        res=st.top();
                        st.pop();
                        if(res =='('){
                            break;
                        }
                        else{
                            return false;
                        }
                        break;
                case ']':if(st.empty()){
                            return false;
                        }
                        res=st.top();
                        st.pop();
                        if(res =='['){
                            break;
                        }
                        else{
                            return false;
                        }
                        break;
                case '}':if(st.empty()){
                            return false;
                        }
                        res=st.top();
                        st.pop();
                        if(res =='{'){
                            break;
                        }
                        else{
                            return false;
                        }
                        break;
            }
        }
        if(st.empty()){
            return true;
        }else return false;
    }
};
