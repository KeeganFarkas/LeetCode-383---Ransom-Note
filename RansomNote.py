# Runtime: 49ms - Beats 95.4%
# Memory: 14.1MB - Beats 94.83%
class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        for i in ransomNote:
            flag: bool = True

            for j in magazine:
                if i is j:
                    magazine = magazine.replace(j, '', 1)
                    flag = False
                    break
            
            if flag:
                return False
        return True
