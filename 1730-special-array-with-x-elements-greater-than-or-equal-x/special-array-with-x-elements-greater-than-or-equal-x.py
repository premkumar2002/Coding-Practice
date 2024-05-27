class Solution:
    def specialArray(self, nums: List[int]) -> int:
        for i in range(1, len(nums) + 1):
            count = sum(1 for x in nums if x >= i)
            if count == i:
                return i
        return -1