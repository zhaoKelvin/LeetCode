# own solution
# Time: O(n)
# Memory: O(n)
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        return not len(nums) == len(set(nums))

# More efficient solution
# doesn't have to iterate through and store every unique element in nums
# Time: O(n)
# Memory: O(n)
class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        hashset = set()
        
        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
            
        return False
            