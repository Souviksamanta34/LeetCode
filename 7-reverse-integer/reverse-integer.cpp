class Solution {
public:
    int reverse(int x) {
        int b[1000], i=0, k=0,j;
        while(x!=0){
            b[i]=x%10;
            x = x/10;
            i++;
        }
        for(j=0;j<i;j++){
            if (k > INT_MAX / 10 )                   return 0;
            if (k < INT_MIN / 10 )                    return 0;
            k = 10 *k + b[j];
        }
        return k;
    }
};