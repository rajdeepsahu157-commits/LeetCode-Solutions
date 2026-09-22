class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char alp=coordinates[0];
        int num=coordinates[1];
        int pos=alp-'a' +1;

        if(pos % 2 ==0){
            if(num %2 !=0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            if(num %2 ==0){
                return true;
            }
        }
        return false;
    }
};