/*
 * LeetCode
 * Problem Name: Two Sum
 * Problem Number: 1 
 * Programming Language: C++
 */

/*
| Problem |

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/

class Solution {
public:

	/*
		Time complexity: O(n)
		Space:           O(n)
	*/
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> sumMap;
        vector<int> sumIndexs;
        
        for(vector<int>::size_type i = 0; i != nums.size(); i++){
            
            std::unordered_map<int,int>::const_iterator findNum = sumMap.find(nums[i]);
            
            if(!(findNum == sumMap.end())){
                sumIndexs.push_back(findNum->second + 1);
                sumIndexs.push_back(i+1);
            }
            else{
                sumMap.insert({target-nums[i],(int)i});
            }
        }
        
        
        return sumIndexs;
    }

    /*
    	This solution does not pass on LeetCode
    	Time Limit Exceeded
		Time complexity: O(n^2)
		Space:           O(1)
	*/
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sumIndexs;
        
        for(int i = 0; i < nums.size(); i++){
            
           for(int j = i + 1; j < nums.size(); j++){
               
               if((nums[i] + nums[j]) == target){
                   sumIndexs.push_back(i+1);
                    sumIndexs.push_back(j+1);
                    
               }
           }
        }
        
        return sumIndexs;
    }
};