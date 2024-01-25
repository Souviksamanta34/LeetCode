class Solution {
public:
int rtod(char c){
        if(c=='I'){
            return 1;
        }
        else if(c=='V'){
            return 5;
        }
        else if(c=='X'){
            return 10;
        }
        else if(c=='L'){
            return 50;
        }
        else if(c=='C'){
            return 100;
        }
        else if(c=='D'){
            return 500;
        }
        else if(c=='M'){
            return 1000;
        }
        else{
            return 0;
        }
        
    }
    int romanToInt(string s) {
        int p=0,m,n;
        char q;
        n = s.length();
        for(int i=0;i<n-1;i++){
            if (rtod(s[i]) < rtod(s[i + 1])) {
                p -= rtod(s[i]);
            }
            else {
                p += rtod(s[i]);
            }
        }
        p += rtod(s[n - 1]); 
        return p;
    }
};