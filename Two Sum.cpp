#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result= {};
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i +1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					result.push_back(i);
					result.push_back(j);
					
				}
			}
		}
		return result;
    }
};

int main()
{
	vector<int> arr = { 1,2,3,4,5 };
	vector<int> result;
	Solution r1;

	result = r1.twoSum(arr, 9);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
		//Prints 3 4
	}
	
	return 0;
}