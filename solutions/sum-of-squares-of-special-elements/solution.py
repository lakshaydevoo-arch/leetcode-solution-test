class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        n = len(nums)
        y = 0
        special = []

        for i in range(n):
            if n % (i + 1) == 0:
                special.append(nums[i])

        for x in special:
            y += x ** 2

        return y