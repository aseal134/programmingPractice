"""
 * LeetCode
 * Problem Name: Two Sum
 * Problem Number: 1 
 * Programming Language: Python
"""

"""
| Problem |

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
"""


class Solution(object):
    
    """
        Time complexity: O(n)
        Space:           O(n)
    """
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        sumDic = {}
        
        for i in range(len(nums)):
            findNum = target - nums[i]
            
            if findNum in sumDic:
                return (sumDic[findNum]+1,i+1)
            else:
                sumDic[nums[i]] = i


    """
    This solution does not pass LeetCode
    Time Limit Exceeded
        Time complexity: O(n^2)
        Space:           O(1)
    """
    def twoSum2(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        sumDic = {}
        
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if(nums[i]+nums[j] == target):
                    return (i+1,j+1)