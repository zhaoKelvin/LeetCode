from typing import List

# Given an array of integers nums and an integer target, 
# return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

# Basic Solution
# Time: O(n^2)
# Memory: O(1)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if (nums[i] + nums[j]) == target:
                    return [i, j]
                

# Hashmap Solution
# Time: O(n)
# Memory: O(n)
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        prevMap = {} # val : index
        
        for index, val in enumerate(nums):
            diff = target - val
            if diff in prevMap:
                return [prevMap[diff], index]
            prevMap[val] = index
        return

