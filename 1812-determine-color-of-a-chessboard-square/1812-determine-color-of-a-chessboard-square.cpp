class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char alp=coordinates[0];
        int num=coordinates[1];

        int pos= alp - 'a' +1;
int n=num+pos;
        if(n % 2==0){
            return false;
        }
        return true;
    }
};