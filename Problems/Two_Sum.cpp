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