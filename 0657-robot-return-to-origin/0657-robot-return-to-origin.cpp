class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0 ;
        bool ans=false ;
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='U'){
                x++;
            }
            if(moves[i]=='D'){
                x-- ;
            }
             if(moves[i]=='L'){
                y++;
            }
             if(moves[i]=='R'){
                y-- ;
            } 
        }
        if(x==0 && y==0){
            ans=true ;
        }
        return ans ;
    }
};