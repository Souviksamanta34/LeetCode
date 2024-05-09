class Solution {
public:
    int numberOfSpecialChars(string word) {
        int i,a,b,c=0,j,k,l;
        int arr[27];
        l = word.size();
        for(i=0;i<l;i++){
            if(word[i]>=97 && word[i]<=122){
                k = word[i] - 96;
                arr[k] = 2;
            }
        }
        for(i=0;i<l;i++){
            if(word[i]>=65 && word[i]<=90){
                k = word[i] - 64;
                if(arr[k]==2)
                arr[k] = 4;
            }
        }
        for(i=0;i<27;i++){
            if(arr[i]==4){
                c++;
            }
        }
        return c;
    }
};