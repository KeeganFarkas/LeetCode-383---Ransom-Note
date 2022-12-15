class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (int i = 0; i < ransomNote.length(); i++){
            bool flag = true;

            for (int j = 0; j < magazine.length(); j++){
                if (ransomNote[i] == magazine[j]){
                    magazine[j] = '.';
                    flag = false;
                    break;
                }
            }
            if (flag)
                return false;
        }
        return true;
    }
};
