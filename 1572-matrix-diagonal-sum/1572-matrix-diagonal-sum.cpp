class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0 , x=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            sum += mat[i][i] ;
            if(i != x){
                sum += mat[i][x];
            }
            x--;
        }
        return sum ;
    }
};