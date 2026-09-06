class Solution {
public:
    bool isAnagram(string s, string t) {
        int A[26]={0};
        bool ans=true;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size();i++){
            A[s[i]-'a']++ ;
            A[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
           if(A[i] != 0){
            ans=false;
            break;
           }
        }
      return ans;
    }
};