class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        arr1 = [0 for i in range(26)]
        arr2 = [0 for j in range(26)]
        for i,j in zip(s,t):
            arr1[ord(i)-ord('a')]+=1
            arr2[ord(j)-ord('a')]+=1
        for i,j in zip(arr1,arr2):
            if i != j:
                return False
        return True 