#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        int check = false;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    check = true;
                    break;
                }
            }
            if (check == true)
            {
                break;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    cout << '[';
    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << ',';
    }
    cout << result[result.size() - 1];
    cout << ']';

    return 0;
}