from typing import *
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashSet = {}
        for i in range(len(nums)):
            if target-nums[i] not in hashSet:
                hashSet[nums[i]] = i
            else:
                return [hashSet[target-nums[i]],i]
        return []