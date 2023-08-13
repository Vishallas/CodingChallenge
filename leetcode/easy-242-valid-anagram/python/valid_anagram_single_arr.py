class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        arr = [0 for i in range(26)]
        for i,j in zip(s,t):
            arr[ord(i)-ord('a')]+=1
            arr[ord(j)-ord('a')]-=1
        for i in arr:
            if i != 0:
                return False
        return True 