class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        string out;
        char ch;
        for(int i=1;i<strs.size();i++){
            if(res.length() > strs[i].length()){
                res=strs[i];
            }
        }
        if(strs.size()==1){
            return strs[0];
        }
        for(int j=0;j<res.length();j++){
            for(int i=0;i<strs.size()-1;i++){
                if(strs[i][j]==strs[i+1][j]){
                    ch=strs[i][j];
                }
                else{
                    return out;
                }
            }
            out.push_back(ch);
        }
        return out;
    }
};
