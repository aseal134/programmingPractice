/*
 * LeetCode
 * Problem Name: Two Sum
 * Problem Number: 1 
 * Programming Language: Java
 */

/*
|Problem |

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/

public class Solution {

	/*
		Time complexity: O(n)
		Space:           O(n)
	*/
    public int[] twoSum(int[] nums, int target) {
        
        int[] sumIndexs = new int[2];
 
        HashMap<Integer,Integer> sumMap = new HashMap<Integer,Integer>();
        
        for(int i =0; i<nums.length; i++){
            if(sumMap.containsKey(nums[i])){
                sumIndexs[0] = sumMap.get(nums[i]) + 1;
                sumIndexs[1] = i + 1;
            }
            else{
                sumMap.put(target - nums[i], i);
            }
        }
        return sumIndexs;
        
    }

	/*
		Time complexity: O(n^2)
		Space:           O(1)
	*/
    public int[] twoSum2(int[] nums, int target) {
		
		int[] sumIndexs = new int[2];
 
        for(int i = 0; i < nums.length; i++){
            for(int j = i+1; j< nums.length; j++){
                if((nums[i] + nums[j]) == target){
                    sumIndexs[0] = i + 1;
                    sumIndexs[1] = j + 1;
                }
            }
        }
        
        return sumIndexs;
        
    }


}