class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(ans.size() != 0 && ans[ans.size()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};