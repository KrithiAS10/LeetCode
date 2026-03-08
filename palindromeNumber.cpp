class Solution {
public:
    bool isPalindrome(int x) {
        long y=0;
        if(x<0 || (x%10==0 && x!=0)){
            return false;
        }
        else{
            while(x>y){
                y=(y*10)+(x%10);
                x/=10;
            }
            if(x==y || x==y/10){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
