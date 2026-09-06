class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> A ;
        int x=0;
        for(int i=1;i<mountain.size()-1;i++){
            if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
                A.push_back(i);
            }
        }
        return A;
    }
};