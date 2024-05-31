class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        l = []
        for i in set(nums):
            if nums.count(i) <2:
                l.append(i)
        return l
        