class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int a,b;
        long c=0;
        int p=x;
        while(p!=0){
            a = p%10;
            p = p/10;
            c = a+ 10*c; 
        }
        if(x==c){
            return true;
        }
        return false;
    }
};